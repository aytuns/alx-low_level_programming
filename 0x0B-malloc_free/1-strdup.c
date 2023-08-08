#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 *
 *int main(void)
 *{
 *    char *s;
 *
 *    s = _strdup("ALX SE");
 *    if (s == NULL)
 *    {
 *        printf("failed to allocate memory\n");
 *        return (1);
 *    }
 *    printf("%s\n", s);
 *    free(s);
 *    return (0);
 *}
 */

char *_strdup(char *str)
{
	int i = 0;
	char *S_ptr = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL || S_ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		S_ptr[i] = str[i];

	return (S_ptr);
}

