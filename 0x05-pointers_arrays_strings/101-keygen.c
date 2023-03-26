#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - generates a random valid password for the 101-crackme program
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
	int i;

	srand(time(NULL)); /* seed the random number generator with the current time */

	/* generate random characters for the password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_num = rand() % 62; /* there are 62 possible characters */
		if (random_num < 26)
		{
			password[i] = 'a' + random_num; /* lowercase letter */
		}
		else if (random_num < 52)
		{
			password[i] = 'A' + random_num - 26; /* uppercase letter */
		}
		else
		{
			password[i] = '0' + random_num - 52; /* digit */
		}
	}

	password[PASSWORD_LENGTH] = '\0'; /* add null terminator */

	printf("%s\n", password); /* print the password */

	return (0);
}
