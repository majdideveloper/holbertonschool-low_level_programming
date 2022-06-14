#include "main.h"
#include <stdio.h>
/**
 *_puts - Function
 *@s: a pointer to char
 *Return: Nothing
 */
void _puts(char *s)
{

	while (*s != '\0')
	{
		puts(s);
	}
}
