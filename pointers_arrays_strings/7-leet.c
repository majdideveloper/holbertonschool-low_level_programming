#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_atoi - Function convert string to int
 *@s: a pointer to char string
 *Return: int
 */
char *leet(char *s)
{
	char arrayCodage [10][3] = {"a=4","A=4","e=3","E=3","o=0","O=0","t=7","T=7","l=1","L=1"};
	int i, j, lenStr = strlen(s);
	char *newString = (char*)malloc(lenStr * sizeof(char)); 
	for( i = 0; i < lenStr; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if (s[i]==arrayCodage[j][0])
				s[i] = arrayCodage[j][2]; 

		}
		


	}
	newString = s;

	return (newString);
}


