#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return function to a 2d array
 * @width: width of the grid
 * @height: height of the grid
 * Return: null if error
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int x, y;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == 0)
		return (NULL);
	for (x = 0; a < height; x++)
	{
		matrix[x] = malloc(width * sizeof(int));
		if (matrix[x] == 0)
		{
			for (y = 0; y < x; y++)
				free(matrix[y]);
			free(matrix);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			matrix[x][y] = 0;
	}
	return (matrix);
}
