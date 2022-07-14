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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *newItem,*ptr;

	newItem = (struct list *)malloc(sizeof(struct list));
	newItem->str = strdup(str);
	newItem->len = strlen(str);
	newItem->next = NULL;

	if (*head == NULL)
		*head = newItem;
	else 
	{
		ptr = *head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
			return (ptr);
		}
	}

	return (NULL);
}



