#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *_strlen_recursion - Function use puts and recursion to display String
 *@s: a pointer to char
 *Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);


	}
	return (_strlen_recursion(s + 1) +  1);
	}



