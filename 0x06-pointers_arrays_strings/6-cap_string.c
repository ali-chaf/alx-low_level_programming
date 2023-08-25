#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *is_separator - checks for Seperators
 *@c: holds the separator
 *Return: 1 if seperartor 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; ++i)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 *cap_string - capitalizes all words of a string
 *@ptr: holds the string
 *Return: return the captillzed string
 */
char *cap_string(char *ptr)
{
	size_t i;

	for (i = 0; i < strlen(ptr); i++)
	{
		if (is_separator(ptr[i - 1]) || i == 0)
		{
			if (islower(ptr[i]))
			{
				ptr[i] = toupper(ptr[i]);
			}
		}

	}

	return (ptr);
}
