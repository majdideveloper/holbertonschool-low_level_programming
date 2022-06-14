#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array - Function
 *@a: a pointer to int
 *@n: n int number of elemenets the array
 *Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");

}
