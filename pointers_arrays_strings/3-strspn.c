#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strspn- Function
 *@s: pointer in the first item of array
 *@accept: pointer second word
 *Return: int how many char repeat
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0, m = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				break;
			}
		}
	}
	return m;
}

