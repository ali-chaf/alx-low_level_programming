#include "main.h"

/**
 * print_triangle - Prints a triangle made of hashtags.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
	int NewL, spc, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (NewL = 1; NewL <= size; NewL++)
		{
			for (spc = size - NewL; spc >= 1; spc--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= NewL; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
