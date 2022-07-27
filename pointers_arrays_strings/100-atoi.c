#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - Function
 *@dest: a pointer to char destination
 *@src: a pointer to char source
 *Return: pointer to char dest
 */


int _atoi(char *s)
{
unsigned int number = 0;
	int sign = 1;
	int i;
	for (i = 0;s[i] != '\0';i++){
		if (s[i]== '-')
		{
			sign *= (-1);
		}
		else if (s[i] >= '0' && s[i]<= '9'){
			number = number * 10 + s[i] - '0';
		}
		else if (number > 0 )
			break;
		}
	return (number * sign);
}	


