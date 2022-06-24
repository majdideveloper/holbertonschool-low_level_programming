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
int i;
char *sen;


	if (str == NULL)
		return (NULL);


	sen = malloc(sizeof(char) * strlen(str) + 1);
	for (i = 0; i < strlen(str) + 1; i++)
		sen[i] = str[i];
	return (sen);

}
