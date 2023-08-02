#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 *
 *
 *int main(void)
 *{
 *   int r;
 *
 *   r = _pow_recursion(1, 10);
 *  printf("%d\n", r);
 * r = _pow_recursion(1024, 0);
 *printf("%d\n", r);
 *    r = _pow_recursion(2, 16);
 *   printf("%d\n", r);
 *  r = _pow_recursion(5, 2);
 * printf("%d\n", r);
 *r = _pow_recursion(5, -2);
 *    printf("%d\n", r);
 *   r = _pow_recursion(-5, 3);
 *  printf("%d\n", r);
 * return (0);
 *}
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
