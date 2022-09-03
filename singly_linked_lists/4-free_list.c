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
void free_list(list_t *head)
{
	list_t  *temp1, *temp2;
	
	temp1 = head;
	while(temp1->next != NULL)
	{
		temp1 = temp1->next;
		temp2 = temp1->next;
		free(temp1);
		temp1= temp2;
	}

free(temp2);
}



