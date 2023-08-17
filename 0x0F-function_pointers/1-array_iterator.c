#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 *
 *void print_elem(int elem)
 * {
 *    printf("%d\n", elem);
 * }
 *
 * void print_elem_hex(int elem)
 * {
 *    printf("0x%x\n", elem);
 * }
 *
 * int main(void)
 * {
 *    int array[5] = {0, 98, 402, 1024, 4096};
 *
 *    array_iterator(array, 5, &print_elem);
 *    array_iterator(array, 5, &print_elem_hex);
 *    return (0);
 * }
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

