#include "main.h"

/**
 * _isdigit - checks if int c is a digit from 0 to 9
 * @c: int c
 * Return: 1 if true or 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
