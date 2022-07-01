#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - Fun
 *@array: pointer to int
 *@size: int
 *@cmp: function
 *Return: 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp)
		return (-1);
	if (!array)
		return (-1);
	if (size <= 0)
		return (-1);
	else
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
			
	return (-1);
}
