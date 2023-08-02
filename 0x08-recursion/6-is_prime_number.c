#include "main.h"


/**
 * is_prime_number - calls the pring number recursion
 * _prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if not
 *
 *
*
*int main(void)
*{
 *   int r;
*
 *   r = is_prime_number(1);
  *  printf("%d\n", r);
   * r = is_prime_number(1024);
*    printf("%d\n", r);
 *   r = is_prime_number(16);
  *  printf("%d\n", r);
   * r = is_prime_number(17);
*    printf("%d\n", r);
 *   r = is_prime_number(25);
  *  printf("%d\n", r);
   * r = is_prime_number(-1);
*    printf("%d\n", r);
 *   r = is_prime_number(113);
  *  printf("%d\n", r);
   * r = is_prime_number(7919);
*    printf("%d\n", r);
 *   return (0);
*}
*/

int _prime_number(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_number(n, i - 1));
}

int is_prime_number(int n)
{
	return (_prime_number(n, n / 2));
}
