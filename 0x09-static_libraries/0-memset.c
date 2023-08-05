#include "main.h"
#include <stdio.h>

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for n bytes
 *
 * //main.c file//
 * void simple_print_buffer(char *buffer, unsigned int size)
 *{
 *    unsigned int i;
 *
 *   i = 0;
 *  while (i < size)
 * {
 *    if (i % 10)
 *   {
 *      printf(" ");
 * }
 *       if (!(i % 10) && i)
 *        {
 *           printf("\n");
 *      }
 *     printf("0x%02x", buffer[i]);
 *    i++;
 *}
 *    printf("\n");
 *}
 *
 *int main(void)
 *{
 *   char buffer[98] = {0x00};
 *
 *   simple_print_buffer(buffer, 98);
 *  _memset(buffer, 0x01, 95);
 * printf("-------------------------------------------------\n");
 *  simple_print_buffer(buffer, 98);
 * return (0);
 *}
 * //end of main.c//
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i;
    int j = n;

    for (i = 0; i < j; i++)
    {
        s[i] = b;
    }
    return (s);
}
