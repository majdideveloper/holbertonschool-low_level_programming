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

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
_putchar('\n');
}
