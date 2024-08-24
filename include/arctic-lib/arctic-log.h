#ifndef __ARCTIC_LOG_H__
#define __ARCTIC_LOG_H__

#include <stdarg.h>
#include "arctic-types.h"
#include "arctic-io.h"

void arctic_info(const string_t format, ...);
void arctic_warn(const string_t format, ...);
void arctic_error(const string_t format, ...);

#endif // __ARCTIC_LOG_H__