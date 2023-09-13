#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to be targeted.
 * @size: The size of the array.
 * @action: The function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
