#include <stdio.h>
#include <ctype.h>
#include <string.h>
char *cap_string(char *ptr)
{
	    size_t i;

    for (i = 0; i < strlen(ptr); i++)
    {
	    if ((isspace(ptr[i - 1]) || i == 0 || (ispunct(ptr[i - 1]) && ptr[i - 1] != '-')))
        {
            if (islower(ptr[i]))
            {
                ptr[i] = toupper(ptr[i]);
            }
        }
        else if (isupper(ptr[i]))
        {
            ptr[i] = tolower(ptr[i]);
        }
    }

    return ptr;
}
