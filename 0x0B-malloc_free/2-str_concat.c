#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 *
 *int main(void)
 *{
 *    char *s;
 *
 *    s = str_concat("Betty ", "Holberton");
 *    if (s == NULL)
 *    {
 *        printf("failed\n");
 *        return (1);
 *    }
 *    printf("%s\n", s);
 *    free(s);
 *    return (0);
 *}
 */

char *str_concat(char *s1, char *s2)

{
	char *conct_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	int i = 0;
	int j = 0;

	if (conct_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		conct_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conct_str[i] = s2[j];
		i++, j++;
	}
	conct_str[i] = '\0';
	return (conct_str);
}

