#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *cap_string- Function
 *@a: pointer in the first item of array
 *Return: char[]uppercase
 */
char *cap_string(char *a)
{
	int s, i;
	char b;
	int len = strlen(a);

	for (i = 0; i < len; i++)
	{
		if (a[i - 1] == ' ' || a[i - 1] == '\n')
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				s = a[i];
				b = s - 32;
				a[i] = b;

			}


		}
	}
	return (a);

}
