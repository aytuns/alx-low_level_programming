#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 *
 *int main(void)
 *{
 *   int r;
 *
 *   r = factorial(1);
 *  printf("%d\n", r);
 * r = factorial(5);
 *printf("%d\n", r);
 *    r = factorial(10);
 *   printf("%d\n", r);
 *  r = factorial(-1024);
 * printf("%d\n", r);
 *return (0);
 *}
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
