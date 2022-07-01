#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - Fun
 *@array: pointer to int
 *@size: size_t
 *@action: function
 *Return: 0
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array)
		return;
	if (!action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
