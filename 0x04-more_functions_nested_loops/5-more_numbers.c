#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int l = 0, n;

	while (l <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			printf("%d", n);
			n++;
		}
		_putchar('\n');
		l++;
	}

}
