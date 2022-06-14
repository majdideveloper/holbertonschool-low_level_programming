#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string- Function
 *@s: a pointer to char
 *Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	char c;

	j = strlen(s);
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;

	}
puts(s);


}
