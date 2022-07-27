#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_atoi - Function convert string to int
 *@s: a pointer to char string
 *Return: int 
 */


int _atoi(char *s)
{
unsigned int number = 0;
	int sign = 1;
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= (-1);
		else if (s[i] >= '0' && s[i] <= '9')
			number = number * 10 + s[i] - '0';
		else if (number > 0 )
			break;
		}
	return (number * sign);
}	


