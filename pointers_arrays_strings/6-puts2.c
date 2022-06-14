#include "main.h"
#include <stdio.h>
/**
 *puts2 - Function
 *@str: a pointer to char
 *Return: Nothing
 */
void puts2(char *str)
{
int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
_putchar('\n');
}

