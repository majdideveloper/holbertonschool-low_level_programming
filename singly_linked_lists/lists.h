#ifndef LISTS_H
#define LISTS_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>




typedef struct list
{
char *str;
int len;
struct list *next;
} list_t;



size_t print_list(const list_t *h);
#endif
