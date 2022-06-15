#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - Function
 *@str: a pointer to char
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i, len;
	int n;


	len = strlen(str);
	n = (len - 1) / 2;
	for (i = 0; i < len; i++)
	{
		if (i > n)
			_putchar(str[i]);
	}
	_putchar('\n');
}

