#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *add_nodeint_end - add other item to  linked list
 *@head: pointer to linked list
 *@n: int to add
 * Return: list_t new linked-list
 */
void free_listint(listint_t *head)
{
	free(head);
	
}
