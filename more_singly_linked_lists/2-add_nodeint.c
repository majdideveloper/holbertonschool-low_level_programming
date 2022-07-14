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
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newItem;

newItem = (struct listint_s *)malloc(sizeof(struct listint_s));
if (newItem == NULL)
	return (NULL);
newItem->n = n;
newItem->next = *head;
*head = newItem;
return (*head);
}
