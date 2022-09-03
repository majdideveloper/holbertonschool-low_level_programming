#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *free_list - add other item to  linked list
 *@head: pointer to linked list
 * Return: NOTHING
 */
void free_list(list_t *head)
{

	list_t  *temp1 = head;

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		free(head->str);
		free(head);
		head = temp1;

	}

}



