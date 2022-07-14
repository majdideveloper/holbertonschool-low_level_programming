#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *free_listint - free  linked list
 *@head: pointer to linked list
 *Return: list_t new linked-list
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head;
		head = head->next;

		free(a->n);
		free(a);

	}
	free(head);

	
}
