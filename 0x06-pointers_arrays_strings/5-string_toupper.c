#include <ctype.h>
#include <string.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@ptr: pointer pointing to the string
 *Return: return string in uppercase
 */
char *string_toupper(char *ptr)
{
	size_t i;

	for (i = 0; i < strlen(ptr); i++)
	{
		ptr[i] = toupper(ptr[i]);
	}

	return (ptr);
}
