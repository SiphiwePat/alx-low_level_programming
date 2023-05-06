/**
 * clear_bits - Sets the values of multiple bits to 0 in a given number
 * @n: Pointer to the number
 * @mask: Bit mask indicating which bits to clear
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bits(unsigned long int *n, unsigned long int mask)
{
	if (mask == 0)
		return (1);

	*n &= ~mask;

	return (1);
}
