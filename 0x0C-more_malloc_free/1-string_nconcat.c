#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string
 * to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 *int main(void)
 *{
 *    char *concat;
 *
 *    concat = string_nconcat("Best ", "School !!!", 6);
 *    printf("%s\n", concat);
 *    free(concat);
 *    return (0);
 *}
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct_str = conct_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	unsigned int i = 0;
	unsigned int j = 0;

	if (conct_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		conct_str[i] = s1[i];
		i++;
	}

	for (j; j <= n; j++)
	{
		conct_str[i] = s2[j];
		i++;
    }
	conct_str[i] = '\0';
	return (conct_str);
}

