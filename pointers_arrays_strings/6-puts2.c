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

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
_putchar('\n');
}

