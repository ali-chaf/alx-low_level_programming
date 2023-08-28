#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 * Return: pointer to beginning of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
