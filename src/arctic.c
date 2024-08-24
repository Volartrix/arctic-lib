#include <arctic-lib/arctic.h>

str_output_func out_func;
string_t log_name;

int arctic_init(str_output_func output_func, string_t logger_name) {
  out_func = output_func;
  if (logger_name == NULL) {
    return ARCTIC_ERR_INVALID_ARGUMENT;
  } else {
    log_name = logger_name;
  }
  aprintf("Arctic-Lib initialized\n");
  return ARCTIC_OK;
}