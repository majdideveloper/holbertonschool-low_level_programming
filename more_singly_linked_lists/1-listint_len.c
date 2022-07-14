#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *listint_len- print a list of linked list
 * @h: pointer to linked list
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;


	while (h != NULL)
	{
		h = h->next;
		++n;
	}
	return (n);
}


