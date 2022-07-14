#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *add_node - add other item to  linked list
 *@head: pointer to linked list
 *@str: pointer to string to add
 * Return: list_t new linked-list
 */
list_t *add_node(list_t **head, const char *str)
{
struct list *newItem;

newItem = (struct list *)malloc(sizeof(struct list));
if (newItem == NULL)
	return (NULL);
newItem->str = strdup(str);
newItem->len = strlen(str);
newItem->next = *head;
*head = newItem;
return (*head);
}



