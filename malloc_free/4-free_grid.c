#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_grid - fun create array
 *@height : int
 *@grid: int **
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		while (i >= 0)
		{
		i--;
		free(grid[i]);
		}
	free(grid);
	}
}



