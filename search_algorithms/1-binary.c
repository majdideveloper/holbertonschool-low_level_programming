#include "search_algos.h"
/**
 *binary_search - function search value in array and return index this value
 *@array : pointer  to array to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t  indexValue = 0;
	int startIndex, endIndex, middle;

	if (!array)
		return (-1);
	startIndex = 0;
	endIndex = size - 1;
	while (startIndex <= endIndex)
	{
		middle = startIndex + (endIndex - startIndex) / 2;
		print_array(array, startIndex, endIndex);
		if (array[middle] == value)
			return (middle);
		else if (value < array[middle])
			endIndex = middle - 1;
		else
			startIndex = middle + 1;

	}
	if (indexValue == 0)
		indexValue = -1;
	return (indexValue);
}
/**
 *print_array - function print all item of list from firstItem to lastItem
 *@array : pointer  to array
 *@firstItem : index of first item to print
 *@lastItem : index of last item  to print
 *Return: Nothing
 */
void print_array(int *array, int firstItem, int lastItem)
{
	int i;

	printf("Searching in array: ");
	for (i = firstItem; i <= lastItem; i++)
	{
		if (i == lastItem )
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}

}
