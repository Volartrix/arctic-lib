#include <arctic-lib/arctic.h>

str_output_func out_func;

int arctic_init(str_output_func output_func) {
  out_func = output_func;
  aprintf("Arctic-Lib initialized\n");
  return ARCTIC_OK;
}