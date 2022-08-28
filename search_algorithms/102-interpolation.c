#include "search_algos.h"
/**
 *interpolation_search - function search value in array and
 *return index this value
 *@array : pointer  to array to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t  indexValue = 0;
	int startIndex, endIndex, position;

	if (!array)
		return (-1);
	startIndex = 0;
	endIndex = size - 1;
	while (startIndex < endIndex)
	{
		position = startIndex +
			(((double)(endIndex - startIndex)
			  / (array[endIndex] - array[startIndex]))
			 * (value - array[startIndex]));
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		else if (value < array[position])
			endIndex = position - 1;
		else
			startIndex = position + 1;

	}
	if (indexValue == 0)
		indexValue = -1;

	return (indexValue);
}

