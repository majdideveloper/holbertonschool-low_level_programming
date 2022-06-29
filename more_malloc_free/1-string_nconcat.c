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

	unsigned int i, len;

	if (s1 == NULL && s2 == NULL)
		newStr = "";
	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	len = strlen(s1) + n;
	newStr = malloc(sizeof(char) * len + 1);

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		if (i < len)
			newStr[i] = s1[i];
		else
			newStr[i] = s2[i - len];
newStr[len] = '\0';	
	return (newStr);
}
