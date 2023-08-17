#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 *
 * int main(void)
 * {
 *    int sum;
 *
 *    sum = sum_them_all(2, 98, 1024);
 *    printf("%d\n", sum);
 *    sum = sum_them_all(4, 98, 1024, 402, -1024);
 *    printf("%d\n", sum);
 *    return (0);
 * }
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

