#include "main.h"
/**
 * _strpbrk - This function searches a string for the first occurrence
 * of any of the specified bytes.
 * @s: The string to search in.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first occurrence of a matching character, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int acceptIndex = 0;

	while (*s)
	{
		while (accept[acceptIndex] != '\0')
		{
			if (*s == accept[acceptIndex])
				return (s);
			acceptIndex++;
		}
		acceptIndex = 0;
		s++;
	}
	return ('\0');
}
