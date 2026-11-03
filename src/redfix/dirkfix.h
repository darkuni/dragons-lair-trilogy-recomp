/* Title-screen Dirk standee fix (see dirkfix.c). */
#ifndef DLT_DIRKFIX_H
#define DLT_DIRKFIX_H
#include <stdint.h>
#include <stddef.h>
typedef struct { const char *name; uint32_t size; const char *sha1; int kind; const char *ref; } dirk_file;   /* sha1 = retail, ref = fixed */
extern const dirk_file DIRK_FILES[];
extern const int DIRK_NFILES;
/* Call first with frame 0 of the retail 01 - Opening.mo (640x480 YUV420): the fix is modelled on it. */
void dlt_dirkfix_set_template(const uint8_t *title_frame0);
int dlt_dirkfix_template_from_movie(const uint8_t *mo, size_t len);   /* same, from the retail movie bytes */
/* Rebuild DIRK_FILES[idx] from its retail bytes; malloc'd .mo or NULL. preview: optional copy of one patched frame. */
uint8_t *dlt_dirkfix(int idx, const uint8_t *orig, size_t olen, size_t *outlen, uint8_t **preview, int preview_frame);
#endif
