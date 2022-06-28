#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - fun list args
 *@n : unsigned int
 *@s1 : pointer to char 
 *@s2 : pointer to char 
 *Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;

	int len;
	long unsigned int i;
	len = strlen(s1);

	newStr = malloc(len + n);

	if (newStr == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1)); i++)
		newStr[i] = s1[i];
	for (i = 0; i < n; i++)
		newStr[strlen(s1) + i] = s2[i];

	return (newStr);
}
