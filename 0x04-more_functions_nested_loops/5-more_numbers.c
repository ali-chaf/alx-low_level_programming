#include <stdio.h>
#include "main.h"
void more_numbers(void)
{
	int l = 0, n;

	while(l <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			printf ("%d", n);
			n++;
		}
		putchar('\n');
		l++;
	}

}
