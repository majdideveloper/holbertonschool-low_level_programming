#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *get_nodeint_at_index - delete the first item of linked list
 *@head: pointer to linked list
 *@index: int index
 * Return: int value of item
 */
	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (index != 0 )
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		index--;
	}
	return (temp);
}
