#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *add_node_end - add other item to  linked list
 *@head: pointer to linked list
 *@str: pointer to string to add
 * Return: list_t new linked-list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *newItem, *ptr;

	newItem = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (!newItem)
		return (NULL);
	newItem->n = n;
	newItem->next = NULL;
	if (*head == NULL)
		*head = newItem;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;

		}
		ptr->next = newItem;
		return (*head);
	}

	return (*head);
}
