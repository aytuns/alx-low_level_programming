#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int str1 = 0;
	int str2 = 0;

	while (*(src + str1) != '\0')
	{
		str1++;
	}
	for (; str2 < str1; str2++)
	{
		dest[str2] = src[str2];
	}
	dest[str1] = '\0';
	return (dest);
}
