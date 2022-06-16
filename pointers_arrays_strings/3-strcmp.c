#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcmp- Function
 *@s2: pointer in the first word
 *@s1: variable second word
 *Return: char
 */
int _strcmp(char *s1, char *s2)
{

	if (strlen(s1) == strlen(s2))
		return (0);
	else if  (strlen(s1) > strlen(s2))
		return (-15);
	else
		return (15);


}
