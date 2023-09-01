#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: Pointer to the memory area to be filled.
 *@b: The byte to be copied.
 *@n: The number of bytes to be filled.
 *Return: A pointer to the filled memory area (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
