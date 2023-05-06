#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max_index = sizeof(unsigned long int) * 8 - 1;

	if ((index & ~max_index) != 0)
		return (-1);

	unsigned long int mask = 1;
	mask <<= index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
