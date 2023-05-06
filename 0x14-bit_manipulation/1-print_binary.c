#include "main.h"
/**
 * print_octal - prints the octal representation of a number
 * @n: the number to print in octal
 */
void print_octal(unsigned long int n)
{
	unsigned long int decimal = 0, remainder;
	int i = 1;

	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimal += remainder * i;
		i *= 2;
	}

	i = 0;
	char octal[100];

	while (decimal != 0)
	{
		octal[i] = (decimal % 8) + '0';
		decimal /= 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
		_putchar(octal[j]);

}
