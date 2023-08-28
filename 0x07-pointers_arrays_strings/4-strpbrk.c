#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
	s++;
	}

}
