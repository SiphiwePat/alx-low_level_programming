#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* Initialize variable argument list */
	va_start(args, n);

	/* Sum up all the arguments */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	/* Clean up variable argument list */
	va_end(args);

	return (sum);
}
