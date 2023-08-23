#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	srand(time(NULL));
	const char CHARS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int len = 10;
	char password[len + 1];
	int i;

	for (i = 0; i < len; i++)
	{
		password[i] = CHARS[rand() % (sizeof(CHARS) - 1)];
	}
	password[len] = '\0';

	printf("Password: %s\n", password);

	
	return (0);
}
