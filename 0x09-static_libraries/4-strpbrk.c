#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 * 
*
*int main(void)
*{
*    char *s = "hello, world";
*    char *f = "world";
 *   char *t;
*
 *   t = _strpbrk(s, f);
  *  printf("%s\n", t);
   * return (0);
*}
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}
