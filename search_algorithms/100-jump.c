#include "search_algos.h"
/**
 *linear_search - function search value in array and return index this value
 *@array : pointer  to array to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	if(!array || size == 0)
		return (-1);
	int  step; 
	size_t	i, startIndex, endIndex;

	step = sqrt(size);
	startIndex = 0;
	endIndex = step;
	

	printf("Value checked array[%lu] = [%d]\n", startIndex,array[startIndex]);
	while(value > array[endIndex] && size > endIndex)
	{
		startIndex += step;
		endIndex += step;
		printf("Value checked array[%lu] = [%d]\n", startIndex,array[startIndex]);

	}
	printf("Value found between indexes [%lu] and [%lu]\n", startIndex,endIndex);
	for(i = startIndex; i < endIndex; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i,array[i]);
		if(i == size - 1)
			break;
		if(value == array[i])
		{
			return (i);
		}

	}
	return (-1);
}
