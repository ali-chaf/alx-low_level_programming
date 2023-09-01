#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 *@s: Pointer to the string to be searched
 *@c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character in the string
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
