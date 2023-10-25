#include <string.h>
int is_palindrome(char *s);
/**
 * pali_helper - checks if palindrome
 * @st: start
 * @la: end
 * Return: 1 if true, 0 if false
*/
int pali_helper(char *st, char *la)
{
	if (st >= la)
	{
		return (1);
	}
	if (*st != *la)
	{
		return (0);
	}
	return (pali_helper(st + 1, la - 1));
}
/**
 * is_palindrome - checks if palindrome
 * @s: string
 * Return: 1 if true, 0 if false
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (pali_helper(s, s + strlen(s) - 1));
}
