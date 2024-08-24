#include <arctic-lib/arctic.h>

str_output_func out_func;

void arctic_init(str_output_func output_func) {
  out_func = output_func;
  out_func("A");
}