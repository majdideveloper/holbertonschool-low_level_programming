#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - fun create array
 *@str : size of array
 *Return: char
 */
char *_strdup(char *str)
{
unsigned long i;
char *sen;
int size = strlen(str) + 1;

	if (str == NULL)
		return (NULL);


	sen = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		sen[i] = str[i];
	return (sen);

}
