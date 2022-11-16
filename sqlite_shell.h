#pragma once

#ifndef EXTERN_C_BEGIN
#ifdef __cplusplus
#define EXTERN_C_BEGIN extern "C" {
#define EXTERN_C_END }
#else
#define EXTERN_C_BEGIN
#define EXTERN_C_END
#endif
#endif

EXTERN_C_BEGIN

typedef void(*Logger)(char *);
int SQLiteShellExecute(int argc, char ** argv, Logger logger);

EXTERN_C_END
