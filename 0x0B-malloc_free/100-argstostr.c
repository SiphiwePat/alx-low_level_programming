<<<<<<< HEAD
#include <stdlib.h>
#include "holberton.h"

/**
* *argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to the new string (Success), NULL (Error)
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
=======
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
<<<<<<< HEAD
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	
=======
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
	return (str);
}
