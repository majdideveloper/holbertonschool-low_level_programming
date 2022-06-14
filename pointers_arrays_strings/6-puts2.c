#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2-0 Function
 *@str: a pointer to char
 *Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int j;
	char c;

	j = strlen(str);
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;

	}



}
