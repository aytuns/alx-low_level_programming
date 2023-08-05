#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 *
 *int main(void)
 *{
 *    _print_rev_recursion("\nColton Walker");
 *    return (0);
 *}
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}