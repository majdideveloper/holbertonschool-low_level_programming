#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *free_listint - free  linked list
 *@head: pointer to linked list
 *Return: list_t new linked-list
 */
void free_listint2(listint_t **head)
{
	free(head);	
}
