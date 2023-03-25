#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    va_list args;
    int sum = 0;

    /* If n == 0, return 0 */
    if (n == 0) {
        return 0;
    }

    /* Use va_start to initialize the argument list */
    va_start(args, n);

    /* Loop through the arguments and add them to the sum */
    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }

    /* Clean up the argument list with va_end */
    va_end(args);

    return sum;
}
