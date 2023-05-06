/**
 * flip_bits_signed - returns the number of bits you would need to flip
 * to get from one signed integer to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits_signed(int n, int m)
{
    unsigned int count = 0;
    unsigned int size = sizeof(int) * 8;
    unsigned int i;
    unsigned int sign_n = n >> (size - 1);
    unsigned int sign_m = m >> (size - 1);

    n = (sign_n == 1) ? ~n + 1 : n;
    m = (sign_m == 1) ? ~m + 1 : m;

    for (i = 0; i < size; i++)
    {
        if ((n & 1) != (m & 1))
            count++;

        n >>= 1;
        m >>= 1;
    }

    return count;
}
