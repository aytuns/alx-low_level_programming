#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 *
 *int is_98(int elem)
 * {
 *    return (98 == elem);
 * }
 *
 * int is_strictly_positive(int elem)
 * {
 *    return (elem > 0);
 * }
 *
 * int abs_is_98(int elem)
 * {
 *    return (elem == 98 || -elem == 98);
 * }
 *
 * int main(void)
 * {
 *   int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
 *    int index;
 *
 *    index = int_index(array, 20, is_98);
 *    printf("%d\n", index);
 *    index = int_index(array, 20, abs_is_98);
 *    printf("%d\n", index);
 *    index = int_index(array, 20, is_strictly_positive);
 *    printf("%d\n", index);
 *    return (0);
 * }
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

