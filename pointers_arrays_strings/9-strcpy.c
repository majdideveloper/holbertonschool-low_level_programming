#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - Function
 *@dest: a pointer to char destination
 *@src: a pointer to char source
 *Return: pointer to char dest
 */
char *_strcpy(char *dest, char *src)

{
	int i;
	char *p = dest;

	for (i = 0;  src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';



return (p);


}
