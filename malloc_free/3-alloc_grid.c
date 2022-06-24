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

	if (arr == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);






	for (i = 0; i < height; i++)
	{
		free(arr);
		arr[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}





	return (arr);
}



