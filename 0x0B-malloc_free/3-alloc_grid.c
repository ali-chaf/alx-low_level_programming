#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **gr;
	int r, c;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	gr = (int **)malloc(height * sizeof(int *));
	if (gr == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		gr[r] = (int *)malloc(width * sizeof(int));
		if (gr[r] == NULL)
		{
			for (i = 0; i < r; i++)
			{
				free(gr[i]);
			}
			free(gr);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			gr[r][c] = 0;
		}
	}

	return (gr);
}
