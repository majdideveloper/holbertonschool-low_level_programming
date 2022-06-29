#include <stdlib.h>
#include <string.h>
/**
 *array_range - fun return array int
 *@min :  int
 *@max :  int
 *Return: array int 
 */
int *array_range(int min, int max)
{

	int *array, item, i;

	if(min > max)
		return(NULL);
	item = max - min;
	array = malloc(item);
	if (array == NULL)
		return (NULL);
	for (i = min; i < max; i++)
		array[i]=i;
	return (array);

}


