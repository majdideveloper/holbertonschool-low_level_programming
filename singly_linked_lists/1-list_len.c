#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * list_len - print a len of linked list
 * @h: pointer to linked list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{


		h = h->next;
		++n;
	}
	return (n);
}



