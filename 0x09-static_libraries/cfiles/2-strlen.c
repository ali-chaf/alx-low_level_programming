#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @str: The string to evaluate
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
