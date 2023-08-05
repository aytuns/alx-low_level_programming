#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 *
 *
 * // main.c//
 * int main(void)
 *{
 *	char *s = "hello, world";
 *	char *f = "oleh";
 *	unsigned int n;
 *
 *	n = _strspn(s, f);
 *	printf("%u\n", n);
 *	return (0);
 *}
 * // end of main.c//
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				n++;
			else if (accept[i] == '\0')
				return (n);
		}
	}
	return (n);
}
