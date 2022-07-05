#include <stdlib.h>
#include <stdarg.h>
#ifndef VARAIADIC_FUNCTIONS_H
#define VARAIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct format
{
    char *op;
    void (*ptr)(va_list(arg));
}format_t;
#endif



