#include "main.h"
/**
 * swap_int - swaps the value of the two integers.
 * @a: pointer to first value.
 * @b: pointer to second value.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
