#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 *
 *void simple_print_buffer(int *buffer, unsigned int size)
 *{
 *    unsigned int i;
 *
 *    i = 0;
 *    while (i < size)
 *    {
 *        if (i % 10)
 *        {
 *            printf(" ");
 *        }
 *        if (!(i % 10) && i)
 *        {
 *            printf("\n");
 *        }
 *        printf("0x%02x", buffer[i]);
 *        i++;
 *    }
 *    printf("\n");
 *}
 *
 *
 *int main(void)
 *{
 *    int *a;
 *
 *    a = array_range(0, 10);
 *    simple_print_buffer(a, 11);
 *    free(a);
 *    return (0);
 *}
 */

int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	len = max - min;
	ptr = malloc(sizeof(int) * (len + 1));

	if (min > max || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

