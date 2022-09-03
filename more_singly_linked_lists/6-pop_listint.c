#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *pop_listint - delete the first item of linked list
 *@head: pointer to linked list
 * Return: int value of item
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);



	return (n);
}
