#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: number to calculate
 * @x: number to test
 * Return: -1 if n does not have a natural square root
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
	return (-1);
	if (n * n == x)
	return (n);
	return (_sqrt(n + 1, x));

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 * Return: -1 if n does not have a natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0 || n == 0)
	{
		return (n);
	}
	return (_sqrt(0, n));
}
