#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcat - Function
 *@dest: a pointer to int
 *@src: n int number of elemenets the array
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *sen;

	sen = dest + strlen(dest);
	while (*src == '\0')
		*sen++ = *src++;
	*sen = '\0';
	return (dest);
}

