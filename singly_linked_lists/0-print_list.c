#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_list - print a list of linked list
 * @list_t: pointer to linked list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	while (h != NULL) {
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			++n;
			continue;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		++n;
	}
	return (n);
}



