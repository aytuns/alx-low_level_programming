#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 *
 * // THE MAIN FUNCTIONN
 *int main(void)
 *{
 *	char *s = "hello, world";
 *	char *f = "world";
 *	char *t;
 *
 *	t = _strstr(s, f);
 *	printf("%s\n", t);
 *	return (0);
 *}
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
				return (needle);
		}
		haystack++;
	}
	return ('\0');
}
