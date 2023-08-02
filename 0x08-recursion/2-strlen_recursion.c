#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 *
 *int main(void)
 *{
 *   int n;
 *
 *   n = _strlen_recursion("Corbin Coleman");
 *  printf("%d\n", n);
 * return (0);
 *}
 */

int _strlen_recursion(char *s)
{
	int strLen = 0;

	if (*s)
	{
		strLen++;
		strLen += _strlen_recursion(s + 1);
	}

	return (strLen);
}
