#include "main.h"
#include <stdio.h>
/**
 *rev_string- Function
 *@s: a pointer to char
 *Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
