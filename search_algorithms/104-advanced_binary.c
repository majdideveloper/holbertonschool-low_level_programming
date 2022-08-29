#include "search_algos.h"
/**
 *binary_search_recursive - function search value in array and return index this value
 *@array : pointer  to array to search in
 *@low : size of array
 *@high : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int search_binary_recursive(int *array, size_t low, size_t high, int value)
{
int middle;


	if(low > high)
		return(-1);
	print_array(array, low, high);
	
	middle = low + (high - low) / 2;
	if (array[middle] == value &&(middle == low || array[middle - 1] != value))
		return middle;
	if(array[middle] >= value)
		return (search_binary_recursive(array, low , middle,value));
	return (search_binary_recursive(array, middle + 1, high, value));




}
/**
 *binary_search - function search value in array and return index this value
 *@array : pointer  to array to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t startIndex, endIndex;
	
	if(!array || size == 0)
		return (-1);

	startIndex = 0;
	endIndex = size - 1;
	return (search_binary_recursive(array, startIndex, endIndex, value));



}
