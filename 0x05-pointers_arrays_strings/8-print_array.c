#include <stdio.h>
/**
 * print_array - Prints the elements of an array of integers,
 * followed by a new line
 * @a: Pointer to the array to be printed
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
}
