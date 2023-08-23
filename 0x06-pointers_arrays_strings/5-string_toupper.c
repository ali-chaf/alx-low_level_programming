#include <ctype.h>
#include <string.h>

char *string_toupper(char *ptr)
{
	size_t i;

	for (i = 0; i < strlen(ptr); i++)
	{
		ptr[i] = toupper(ptr[i]);
	}

	return (ptr);
}
