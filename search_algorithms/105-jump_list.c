#include "search_algos.h"
listint_t *nextStep(listint_t *head, int step);
/**
 *jump_list - function search value in linked list and return index this value
 *@list : pointer  to linked list to search in
 *@size : size of array
 *@value : value to find in array
 *Return: int index of value if found else -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

	int step;
	listint_t *startIndex, *endIndex;

	if (!list)
		return (NULL);


	step = sqrt(size);
	startIndex = list;


	endIndex = nextStep(list, step);
	/*	printf("%d\n", endIndex->n);*/

	while ((value > endIndex->n && size > endIndex->index) || !endIndex)
	{
		startIndex = endIndex;
		endIndex = nextStep(endIndex, step);
		printf("Value checked at index [%lu] = [%d]\n",
				startIndex->index, startIndex->n);

	}
	printf("Value checked at index [%lu] = [%d]\n",
			endIndex->index, endIndex->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
			startIndex->index, endIndex->index);
	while (startIndex->next != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				startIndex->index, startIndex->n);
		if (startIndex->n == value)
			return (startIndex);
		startIndex = startIndex->next;
	}
	return (NULL);

}

/**
 *nextStep - function go to next step
 *@head : pointer  to array
 *@step : step to jump in array
 *Return: int index of value if found else -1
 */
listint_t *nextStep(listint_t *head, int step)
{
	int i = 0;

	while (head->next != NULL)
	{
		head = head->next;
		i++;
		if (i == step)
		{
			break;
		}
	}
	return (head);
}
