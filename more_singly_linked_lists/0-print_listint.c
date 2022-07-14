#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_listint - print a list of linked list
 * @h: pointer to linked list
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++n;
	}
	return (n);
}


