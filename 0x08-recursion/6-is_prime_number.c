#include "main.h"
/**
 * is_prime_number - checks if n is a prime number
 * @n: number
 * Return: 1 if prime, 0 otherwise
*/
int is_p(int n, int s);
int is_prime_number(int n)
{
	int s = n / 2;

	if (n <= 1)
		return (0);
	return (is_p(n, s));
}
/**
 * is_p - checks for prime
 * @n: number
 * @s: number to check
 * Return: 1 if prime, 0 otherwise
*/
int is_p(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_p(n, s - 1));
}
