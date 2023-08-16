#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: The number to generate the times table for.
 */
void print_times_table(int n)
{
	int r, c, s;

	if (n > 15 || n < 0)
		return;

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			s = r * c;
			if (c == 0)
				printf("%d", s);
			else
				printf(", %3d", s);
		}
		printf("\n");
	}
}
