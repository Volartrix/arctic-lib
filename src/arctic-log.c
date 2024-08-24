#include <arctic-lib/arctic-log.h>
#include <arctic-lib/arctic.h>

void arctic_info(const string_t format, ...) {
    va_list args;
    aprintf("[%s] [INFO]: ", log_name);
    va_start(args, format);
    avprintf(format, args);
    va_end(args);
}
void arctic_warn(const string_t format, ...) {
    va_list args;
    aprintf("[%s] [WARN]: ", log_name);
    va_start(args, format);
    avprintf(format, args);
    va_end(args);
}
void arctic_error(const string_t format, ...) {
    va_list args;
    aprintf("[%s] [ERROR]: ", log_name);
    va_start(args, format);
    avprintf(format, args);
    va_end(args);
}
