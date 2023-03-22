#include "main.h"
#include <unistd.h>
/**
<<<<<<< HEAD
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is return, and is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
}
