#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 * int main(void)
 * {
 *    list_t *head;
 *
 *    head = NULL;
 *    add_node_end(&head, "Anne");
 *    add_node_end(&head, "Colton");
 *    add_node_end(&head, "Corbin");
 *    add_node_end(&head, "Daniel");
 *    add_node_end(&head, "Danton");
 *    add_node_end(&head, "David");
 *    add_node_end(&head, "Gary");
 *    add_node_end(&head, "Holden");
 *    add_node_end(&head, "Ian");
 *    add_node_end(&head, "Ian");
 *    add_node_end(&head, "Jay");
 *    add_node_end(&head, "Jennie");
 *    add_node_end(&head, "Jimmy");
 *    add_node_end(&head, "Justin");
 *    add_node_end(&head, "Kalson");
 *    add_node_end(&head, "Kina");
 *    add_node_end(&head, "Matthew");
 *    add_node_end(&head, "Max");
 *    add_node_end(&head, "Michael");
 *    add_node_end(&head, "Ntuj");
 *    add_node_end(&head, "Philip");
 *    add_node_end(&head, "Richard");
 *    add_node_end(&head, "Samantha");
 *    add_node_end(&head, "Stuart");
 *    add_node_end(&head, "Swati");
 *    add_node_end(&head, "Timothy");
 *    add_node_end(&head, "Victor");
 *    add_node_end(&head, "Walton");
 *    print_list(head);
 *    return (0);
 * }
 *
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
