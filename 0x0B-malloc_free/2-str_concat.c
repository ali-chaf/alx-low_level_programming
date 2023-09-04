#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2 and null if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	con = (char *)malloc((strlen(s1 + 1) + strlen(s2 + 1)) * sizeof(char));
	if (con == NULL)
	{
		return (NULL);
	}
	strcpy(con, s1);
	strcat(con, s2);
	return (con);
}
