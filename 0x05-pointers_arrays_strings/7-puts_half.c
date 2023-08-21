#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string,
 * followed by a new line
 * @str: Pointer to the string to be printed
 */
void  puts_half(char *str)
{
	int l = strlen(str);
	int s;
	int i;
	int m = l / 2;

	if (l % 2 == 0)
	{

		for (i = m; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		s = (l - 1) / 2;
		for (i = s + 1; i < l; i++)
	
		{
			_putchar(str[i]);
		}
	
	}
	_putchar('\n');
}
