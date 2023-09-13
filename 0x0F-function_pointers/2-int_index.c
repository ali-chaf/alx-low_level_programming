#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Array containing elements.
 * @size: Number of elements in the array.
 * @cmp: Function to compare values.
 *
 * Return: Returns -1 if no element matches or when size is less than zero.
 * Returns the index of the first corresponding element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

