/* Red ENERGIZE restoration on the extracted game folder (see redfix.c). */
#ifndef DLT_REDFIX_H
#define DLT_REDFIX_H
#ifdef __cplusplus
extern "C" {
#endif
typedef void (*dlt_redfix_progress)(int done, int total, const char *name, const char *what, void *user);
typedef struct { int rebuilt, already, skipped, failed, mismatch; } dlt_redfix_result;
/* content_dir = game/files/Content16. Returns segments that are red afterwards, or -1 if any failed. */
int dlt_redfix(const char *content_dir, int threads, dlt_redfix_progress cb, void *user, dlt_redfix_result *res);
#ifdef __cplusplus
}
#endif
#endif
