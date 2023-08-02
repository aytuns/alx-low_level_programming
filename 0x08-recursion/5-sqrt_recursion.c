#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - calls the sqrt recursion
 * the_sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 * Return: the resulting square root
 *
*
*int main(void)
*{
*    int r;
*
*    r = _sqrt_recursion(1);
*    printf("%d\n", r);
*    r = _sqrt_recursion(1024);
*    printf("%d\n", r);
*    r = _sqrt_recursion(16);
*    printf("%d\n", r);
*    r = _sqrt_recursion(17);
*    printf("%d\n", r);
*    r = _sqrt_recursion(25);
*    printf("%d\n", r);
*    r = _sqrt_recursion(-1);
*    printf("%d\n", r);
*    return (0);
*}
*/

int the_sqrt_recursion(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (the_sqrt_recursion(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (the_sqrt_recursion(n, 0));
}
