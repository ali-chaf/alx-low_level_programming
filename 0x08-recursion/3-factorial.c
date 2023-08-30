#include "main.h"

/**
 *  factorial - function that returns the factorial of a given number
 * @n: the given number
 * Return: -1 if n < 0, 1 if n = 0, else factorial of given n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
