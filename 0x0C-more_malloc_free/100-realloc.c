#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
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
 *
 *int main(void)
 *{
 *    char *p;
 *    int i;
 *
 *    p = malloc(sizeof(char) * 10);
 *    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
 *    i = 0;
 *    while (i < 98)
 *    {
 *        p[i++] = 98;
 *    }
 *    simple_print_buffer(p, 98);
 *    free(p);
 *    return (0);
 *}
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = malloc(new_size);
	char *old_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	if (!new_ptr)
	{		
		return (NULL);
	}

	if (new_size < old_size)
	{
        for (i = 0; i < new_size; i++)
		{			
			new_ptr[i] = old_ptr[i];
		}
	}

	if (new_size > old_size)
	{
        for (i = 0; i < old_size; i++)
		{			
			new_ptr[i] = old_ptr[i];
		}
	}

	free(ptr);

	return (new_ptr);
}

