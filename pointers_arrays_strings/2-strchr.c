#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr- Function
 *@s: pointer in the first item of array
 *@c: len of array
 *Return: char list
 */
char *_strchr(char *s, char c)
{
	int i, len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
