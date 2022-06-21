#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *_print_rev_recursion - Function use puts and recursion to display rev String
 *@s: a pointer to char
 *Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

