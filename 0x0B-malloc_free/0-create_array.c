<<<<<<< HEAD
#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 *  it with a specific char.
 *  @c: char to initialize
 *  @size: number of bytes to allocate
 *
 *  Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
=======
#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
}
