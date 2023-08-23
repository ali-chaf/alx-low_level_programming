#include <string.h>
/**
 *_strcat - function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */
char *my_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
