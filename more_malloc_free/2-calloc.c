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

	void *array;
	char *arr;
	int sum, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	sum = nmemb * size;
	array = malloc(sum);
	if (array == NULL)
		return (NULL);

	arr = array;
	for (i = 0; i <= sum; i++)
		arr[i] = 0;
	return (array);

}


