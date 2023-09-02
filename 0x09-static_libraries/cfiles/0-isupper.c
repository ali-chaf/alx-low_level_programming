#include "main.h"
/**
 * _isupper - prints 1 or 0 depending on input
 * @c: input type variable
 *
 * Description: checks if letter is upercase
 * Return: 1 if c is uppercase
 * Returns: 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
		return (0);
}
