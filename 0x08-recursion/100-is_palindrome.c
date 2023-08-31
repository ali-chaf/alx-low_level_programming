#include "main.h"
int is_palindrome(char *s);
/**
 * palindrome_helper - checks if palindrome
 * @start: start
 * @end: end
 * Return: 1 if true, 0 if false
*/
int palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (palindrome_helper(start + 1, end - 1));
}
/**
 * is_palindrome - checks if palindrome
 * @s: string
 * Return: 1 if true, 0 if false
*/
int is_palindrome(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	return (palindrome_helper(s, end));
}
