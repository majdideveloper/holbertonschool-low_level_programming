#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *pop_listint - delete the first item of linked list
 *@head: pointer to linked list
 * Return: int value of item
 */
	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	
	while(index != 0 || temp->next == NULL)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
