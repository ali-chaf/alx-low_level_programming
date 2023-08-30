#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * using standlib to be updated
 * @n: number to calculate
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return ((int)sqrt(n));
}
