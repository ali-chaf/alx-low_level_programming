#include "main.h"
#include <stdio.h>
void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			putchar(a);
		}	
			a++;

	}
	putchar('\n');
}
