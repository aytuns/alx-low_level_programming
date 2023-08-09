#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *void simple_print_buffer(char *buffer, unsigned int size)
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
 *int main(void)
 *{
 *    char *buffer;
 *
 *    buffer = create_array(98, 'H');
 *    if  (buffer == NULL)
 *    {
 *        printf("failed to allocate memory\n");
 *        return (1);
 *    }
 *    simple_print_buffer(buffer, 98);
 *    free(buffer);
 *    return (0);
 *}
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char* ptr = malloc(sizeof(char) * size);
	
	if ((size == NULL) || (ptr == 0))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

