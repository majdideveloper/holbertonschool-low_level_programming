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
	char *sen;
	int i = 0;

	sen = dest + strlen(dest);
	if (strlen(src) == 0)
		src = "\0";
	while (n != i)
	{
		*sen++ = *src++;
		i++;
	}


	return (dest);
}
