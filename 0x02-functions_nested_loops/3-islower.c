#include "main.h"
/**
 *_islower - checks for lowercase character
 *@c: hold the letter
 *Return:  Returns 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
