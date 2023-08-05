#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 *
 * int main(void)
 *{
 *char s1[98] = "Hello ";
 *char s2[] = "World!\n";
 *char *ptr;
 *
 *printf("%s\n", s1);
 *printf("%s", s2);
 *ptr = _strncat(s1, s2, 1);
 *printf("%s\n", s1);
 *printf("%s", s2);
 *printf("%s\n", ptr);
 *ptr = _strncat(s1, s2, 1024);
 *printf("%s", s1);
 *printf("%s", s2);
 *printf("%s", ptr);
 *return (0);
 *}
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
