#ifndef __ARCTIC_ARCTIC_H__
#define __ARCTIC_ARCTIC_H__

#include "func-blueprints.h"
#include "arctic-io.h"
#include "arctic-string.h"
#include "arctic-codes.h"
#include "arctic-macros.h"
#include "arctic-types.h"

extern str_output_func out_func;

int arctic_init(str_output_func output_func);

#endif // __ARCTIC_ARCTIC_H__