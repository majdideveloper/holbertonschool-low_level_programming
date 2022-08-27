#include "search_algos.h"
/**
 *linear_search - function search value in array and return index this value
 *@array : pointer  to array to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i, indexValue = 0;

	if (!array)
		return -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			indexValue = i;
			break;
		}
	}
	if (indexValue == 0) 
		indexValue = -1;
	return (indexValue);
}
