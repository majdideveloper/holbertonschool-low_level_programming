#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - fun create array
 *@height : int
 *@width : int
 *Return: array 2 dim
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **) malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}



