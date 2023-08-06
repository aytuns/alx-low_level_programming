#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])

{
	int i, change, count;
	int coins[] = {25, 10, 5, 2, 1};

	count = 0;
	change = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (change <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (change >= coins[i])
		{
			change -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
