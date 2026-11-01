#!/usr/bin/env python3
"""Extract a Wii disc image (.iso or .ciso) into a game folder: sys/ (main.dol, boot.bin, fst.bin, tmd.bin, ticket.bin) and files/.
usage: prepare_disc.py <image.(iso|ciso)> <outdir>"""
import os, struct, sys
from Crypto.Cipher import AES
from libWiiPy.title.commonkeys import get_common_key

class Ciso:
    def __init__(self, f):
        self.f = f
        hdr = f.read(0x8000)
        assert hdr[:4] == b'CISO'
        self.bs = struct.unpack('<I', hdr[4:8])[0]
        self.map = []
        n = 0
        for b in hdr[8:]:
            self.map.append(n if b else None)
            if b: n += 1
    def read(self, off, size):
        out = bytearray()
        while size:
            blk, o = divmod(off, self.bs)
            k = min(size, self.bs - o)
            idx = self.map[blk] if blk < len(self.map) else None
            if idx is None:
                out += bytes(k)
            else:
                self.f.seek(0x8000 + idx * self.bs + o)
                out += self.f.read(k)
            off += k; size -= k
        return bytes(out)

class Iso:
    def __init__(self, f): self.f = f
    def read(self, off, size):
        self.f.seek(off); return self.f.read(size)

class Partition:
    def __init__(self, disc, off):
        self.d = disc; self.off = off
        tik = disc.read(off, 0x2A4)
        ck = get_common_key(tik[0x1F1])
        self.key = AES.new(ck, AES.MODE_CBC, tik[0x1DC:0x1E4] + bytes(8)).decrypt(tik[0x1BF:0x1CF])
        hdr = disc.read(off + 0x2B8, 8)
        self.data = off + (struct.unpack('>I', hdr[:4])[0] << 2)
        self.cache = {}
    def cluster(self, n):
        c = self.cache.get(n)
        if c is None:
            raw = self.d.read(self.data + n * 0x8000, 0x8000)
            c = AES.new(self.key, AES.MODE_CBC, raw[0x3D0:0x3E0]).decrypt(raw[0x400:])
            if len(self.cache) > 64: self.cache.clear()
            self.cache[n] = c
        return c
    def read(self, off, size):
        out = bytearray()
        while size:
            n, o = divmod(off, 0x7C00)
            k = min(size, 0x7C00 - o)
            out += self.cluster(n)[o:o + k]
            off += k; size -= k
        return bytes(out)

def dol_size(p, off):
    h = p.read(off, 0x100)
    end = 0x100
    for i in range(18):
        o = struct.unpack('>I', h[i*4:i*4+4])[0]; s = struct.unpack('>I', h[0x90+i*4:0x94+i*4])[0]
        if o: end = max(end, o + s)
    return end

def main(img, out):
    f = open(img, 'rb')
    magic = f.read(4); f.seek(0)
    d = Ciso(f) if magic == b'CISO' else Iso(f)
    os.makedirs(out, exist_ok=True)
    print('game id', d.read(0, 6), d.read(0x20, 0x40).split(b'\0')[0].decode())
    gp = None
    for t in range(4):
        cnt, toff = struct.unpack('>II', d.read(0x40000 + t*8, 8))
        for i in range(cnt):
            poff, ptype = struct.unpack('>II', d.read((toff << 2) + i*8, 8))
            print('partition table', t, 'off', hex(poff << 2), 'type', ptype)
            if ptype == 0 and gp is None: gp = poff << 2
    p = Partition(d, gp)
    sysd = os.path.join(out, 'sys'); os.makedirs(sysd, exist_ok=True)
    open(os.path.join(sysd, 'ticket.bin'), 'wb').write(d.read(gp, 0x2A4))
    tsz, toff = struct.unpack('>II', d.read(gp + 0x2A4, 8))
    open(os.path.join(sysd, 'tmd.bin'), 'wb').write(d.read(gp + (toff << 2), tsz))
    bh = p.read(0, 0x440)
    open(os.path.join(sysd, 'boot.bin'), 'wb').write(bh)
    open(os.path.join(sysd, 'bi2.bin'), 'wb').write(p.read(0x440, 0x2000))
    dol_off = struct.unpack('>I', bh[0x420:0x424])[0] << 2
    fst_off = struct.unpack('>I', bh[0x424:0x428])[0] << 2
    fst_sz = struct.unpack('>I', bh[0x428:0x42C])[0] << 2
    open(os.path.join(sysd, 'main.dol'), 'wb').write(p.read(dol_off, dol_size(p, dol_off)))
    fst = p.read(fst_off, fst_sz)
    open(os.path.join(sysd, 'fst.bin'), 'wb').write(fst)
    n = struct.unpack('>I', fst[8:12])[0]
    strt = n * 12
    def name(i):
        o = struct.unpack('>I', fst[i*12:i*12+4])[0] & 0xFFFFFF
        return fst[strt+o:fst.index(b'\0', strt+o)].decode('latin-1')
    root = os.path.join(out, 'files')
    stack = [(n, root)]
    os.makedirs(root, exist_ok=True)
    total = 0
    for i in range(1, n):
        while i >= stack[-1][0]: stack.pop()
        flags = fst[i*12]
        a, b = struct.unpack('>II', fst[i*12+4:i*12+12])
        path = os.path.join(stack[-1][1], name(i))
        if flags:
            os.makedirs(path, exist_ok=True); stack.append((b, path))
        else:
            off = a << 2
            with open(path, 'wb') as w:
                while b:
                    k = min(b, 1 << 22); w.write(p.read(off, k)); off += k; b -= k; total += k
    print('extracted', n - 1, 'entries,', total, 'bytes')

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
