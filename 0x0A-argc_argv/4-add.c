#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the sum of all numbers inputed
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
