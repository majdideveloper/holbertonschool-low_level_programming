#include <stdlib.h>
#include <string.h>
/**
 *_calloc - fun list args
 *@nmemb : unsigned int
 *@size : unsigned int
 *Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

void *arr;

if (nmemb == 0 || size == 0)
	return(NULL);
arr= malloc(nmemb * size);
if (arr == NULL)
	return (NULL);
}
