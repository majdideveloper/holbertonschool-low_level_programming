#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset- Function
 *@s: pointer in the first item of array
 *@b: len of array
 *@n: len of array
 *Return: char list
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;



	}
return (s);
}
