#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *string_toupper- Function
 *@a: pointer in the first item of array
 *Return: char[]uppercase
 */
char *string_toupper(char *a)
{
	int s, i;
	char b;
	int len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			s = a[i];
			b = s - 32;
			a[i] = b;

		}
	}
	return (a);

}
