#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncat - Function
 *@dest: pointer in the first word
 *@src: variable second word
 *@n: n int number of char to copy
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;

	}

	return (dest);
}
