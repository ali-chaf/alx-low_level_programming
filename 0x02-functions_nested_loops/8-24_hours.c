#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int l, r;

	for (l = 0; l <= 23; l++)
	{
		for (r = 0; r <= 59; r++)
		printf("%02d:%02d\n", l, r);
	}
}
