#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strncpy - Function
 *@dest: pointer in the first word
 *@src: variable second word
 *@n: n int number of char to copy
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int  j, i;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		j = j + 1;
	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;

	}

	return (dest);
}
