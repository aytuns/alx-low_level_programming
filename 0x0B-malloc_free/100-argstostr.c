#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 *
*int main(int ac, char *av[])
*{
*    char *s;
*
*    s = argstostr(ac, av);
*    if (s == NULL)
*    {
*        return (1);
*    }
*    printf("%s", s);
*    free(s);
*    return (0);
*}
*/

char *argstostr(int ac, char **av)
{
	int i, n;
	int r = 0;
	char* str_ptr = malloc(sizeof(char) * (strlen(*av) + 1));;

	if (ac == 0 || av == NULL || str_ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str_ptr[r] = av[i][n];
			r++;
		}
		if (str_ptr[r] == '\0')
		{
			str_ptr[r++] = '\n';
		}
	}

	return (str_ptr);
}

