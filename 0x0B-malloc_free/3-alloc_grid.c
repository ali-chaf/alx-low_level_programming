#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @hight: height of array
 * Return: pointer to the array
*/
int **alloc_grid(int width, int height)
{
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	return(0);
}
