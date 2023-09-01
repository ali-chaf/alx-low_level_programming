#include "main.h"
/**
 * _strstr - function that locates a substring.
 *@haystack: input string
 *@needle: substring to search for
 *
 * Return: pointer to the beginning of the substring if found
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_length = 0, i = 0, j = 0, k, match_count = 0, match_index;
	char *substring_start;

	while (needle[needle_length] != '\0')
	{
		needle_length++;
	}

	while (haystack[i] != '\0')
	{
		i++;
	}

	if (needle_length == 0)
		return (haystack);

	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			substring_start = &haystack[j];
			match_index = j;
			match_count = 0;

			for (k = 0; k < needle_length; k++)
			{
				if (haystack[match_index] == needle[k])
					match_count++;
				match_index++;
			}
		}

		if (match_count == needle_length)
			return (substring_start);

		j++;
	}

	return ('\0');
}
