#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: character
 * Return: number of bytes in the accept
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t c = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		c++;
		s++;
	}

	return (c);
}
