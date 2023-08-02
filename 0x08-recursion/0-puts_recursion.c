#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 *
 *
 *int main(void)
 *{
 *    _puts_recursion("Puts with recursion");
 *    return (0);
 *}
 *
 * //Another METHOD TO PRINT OUT S
 *void _puts_recursion(char *s)
 *{
 *for (;*s;s++)
 *{
 *	putchar(*s);
 *}
 *putchar('\n');
 *}
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
