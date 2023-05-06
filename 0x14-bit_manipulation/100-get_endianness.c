#include <stdio.h>

int get_endianness(void)
{
    unsigned int i = 1;
    unsigned char *p = (unsigned char *)&i;
    return (*p == 1) ? 1 : 0;
}
