#include "main.h"

/**
 *_strlen - Function
 *@s: a pointer to char
 *Return: number of char
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
