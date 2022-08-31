#include "search_algos.h"
/**
 *jump_list - function search value in linked list and return index this value
 *@list : pointer  to linked list to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{

	skiplist_t *startIndex, *endIndex;


	if (!list)
		return (NULL);



	startIndex = list;
	endIndex = list->express;







	while (value > endIndex->n 

			&& endIndex-> express != NULL)
	{
		startIndex = endIndex;
		endIndex = endIndex->express;
		printf("Value checked at index [%lu] = [%d]\n",
				startIndex->index, startIndex->n);

	}
	printf("Value checked at index [%lu] = [%d]\n",
			endIndex->index, endIndex->n);

	printf("Value found between indexes [%lu] and [%lu]\n",
			startIndex->index, endIndex->index);
	while (startIndex)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				startIndex->index, startIndex->n);
		if (startIndex->n == value)
			return (startIndex);
		startIndex = startIndex->next;
	}
	return (NULL);

}


