#include "main.h"
#include <stdio.h>
/**
 *print_rev - Function
 *@s: a pointer to char
 *Return: Nothing
 */
void print_rev(char *s)
{
int i = 0;
int j;

	while (*s != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}

}
