#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memcpy- Function
 *@dest: pointer in the first item of array
 *@src: len of array
 *@n: len of array
 *Return: char list
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];



	}
return (dest);
}
