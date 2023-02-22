#include "main.h"
#include <unistd.h>
/**
 * _putcher - writes the character c to stout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set apparently.
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}	
