#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplicaiton of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, value;

	for (i = 0; i < argc; i++)
	{
		if (argc <= 2)
			value = 1;
		else
			value = 2;
	}
	if (value == 1)
		printf("Error \n");
	if (value == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
