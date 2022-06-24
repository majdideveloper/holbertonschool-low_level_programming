#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - fun create array
 *@s1 : pointer of char
 *@s2 : pointer of char
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long i;
	char *sen;


	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";



	sen = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
	if (sen == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1)); i++)
		sen[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		sen[strlen(s1) + i] = s2[i];
	return (sen);

}
