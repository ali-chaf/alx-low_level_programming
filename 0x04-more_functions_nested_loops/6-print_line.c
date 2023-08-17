#include "main.h"

void print_line(int n)
{
        int dash;

        if (n <= 0)
        {
		_putchar('\n');
	}
	else
	{
		for (dash = 1; dash <= n; dash++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
