#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *argstostr - fun list args
 *@ac : int
 *@av : pointer to pointer char
 *Return: pointer to char "list of args"
 */
char *argstostr(int ac, char **av)
{

	int i;
	char *newStr = malloc(ac * (sizeof(char) + 51));

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);


	if (newStr == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (newStr);
}
