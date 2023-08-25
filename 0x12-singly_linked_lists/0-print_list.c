#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 *
 * main - check the code
 *
 * Return: Always 0.
 *
 *
 * int main(void)
 * {
 *    list_t *head;
 *    list_t *new;
 *    list_t hello = {"World", 5, NULL};
 *   size_t n;
 *
 *   head = &hello;
 *   new = malloc(sizeof(list_t));
 *   if (new == NULL)
 *   {
 *       printf("Error\n");
 *       return (1);
 *   }
 *   new->str = strdup("Hello");
 *   new->len = 5;
 *   new->next = head;
 *   head = new;
 *   n = list_len(head);
 *   printf("-> %lu elements\n", n);
 *   free(new->str);
 *   free(new);
 *   return (0);
 * }
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
