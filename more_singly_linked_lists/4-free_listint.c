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
		listint_t  *temp1 = head;

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		free(head);
		head = temp1;

	}
	
}
