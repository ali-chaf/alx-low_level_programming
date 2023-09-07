#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: null if min > max or the pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0, size = min; size <= max; i++, size++)
		p[i] = size;

	return (p);
}
