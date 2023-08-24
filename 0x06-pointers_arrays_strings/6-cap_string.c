#include <ctype.h>
#include <string.h>
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @ptr: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *ptr)
{
	size_t i = 0;

	if (ptr[i] != '\0' && islower(ptr[i]))
	{
		ptr[i] = toupper(ptr[i]);
	}


	for (i = 1; i < strlen(ptr); i++)
	{
		if (isspace(ptr[i - 1]) || ispunct(ptr[i - 1]))
		{
			if (islower(ptr[i]))
			{
				ptr[i] = toupper(ptr[i]);
			}
		}
	}
	return (ptr);
}
