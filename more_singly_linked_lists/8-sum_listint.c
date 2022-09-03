#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_listint - calcul sum of item linked list
 *@head: pointer to linked list
 * Return: int sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{	
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

