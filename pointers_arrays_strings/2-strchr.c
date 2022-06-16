#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr- Function
 *@s: pointer in the first item of array
 *@c: len of array
 *Return: char list
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != c)
{
	s[i] = '\0';
	i++;
}
return (s);
}
