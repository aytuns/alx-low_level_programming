#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 *
 * //main.c//
 * int main(void)
 *{
 *   char *s = "hello";
 *  char *f;
 *
 *   f = _strchr(s, 'l');
 *
 *   if (f != NULL)
 *  {
 *     printf("%s\n", f);
 *}
 *    return (0);
 *}
 * //end of main.c//
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c) return (&s[i]);
	}
	return (0);
}
