#include "main.h"
/**
 * print_square - Prints a square of a given size.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i = 1, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;

			}
			_putchar('\n');
			i++;
		}
	}
}
