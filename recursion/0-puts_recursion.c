#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *_puts_recursion - Function use puts and recursion to display String
 *@s: a pointer to char
 *Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;


	}
	_putchar(*s++);
	_puts_recursion(s);
}



