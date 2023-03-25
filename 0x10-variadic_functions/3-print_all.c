#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @arg: the character to print
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an integer
 * @arg: the integer to print
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: the float to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: the string to print
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *          c: char.
 *          i: integer.
 *          f: float.
 *          s: char * (if the string is NULL, print (nil) instead.
 *          any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (print[j].type)
		{
			if (format[i] == print[j].type)
			{
				printf("%s", separator);
				print[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
