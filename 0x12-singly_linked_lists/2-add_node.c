#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 *
 * main - check the code
 *
 * Return: Always 0.
 *
 *
 * int main(void)
 * {
 *    list_t *head;
 *
 *    head = NULL;
 *   add_node(&head, "Alexandro");
 *    add_node(&head, "Asaia");
 *    add_node(&head, "Augustin");
 *    add_node(&head, "Bennett");
 *    add_node(&head, "Bilal");
 *    add_node(&head, "Chandler");
 *    add_node(&head, "Damian");
 *    add_node(&head, "Daniel");
 *    add_node(&head, "Dora");
 *    add_node(&head, "Electra");
 *    add_node(&head, "Gloria");
 *    add_node(&head, "Joe");
 *    add_node(&head, "John");
 *    add_node(&head, "John");
 *    add_node(&head, "Josquin");
 *    add_node(&head, "Kris");
 *    add_node(&head, "Marine");
 *    add_node(&head, "Mason");
 *    add_node(&head, "Praylin");
 *    add_node(&head, "Rick");
 *    add_node(&head, "Rick");
 *    add_node(&head, "Rona");
 *    add_node(&head, "Siphan");
 *    add_node(&head, "Sravanthi");
 *    add_node(&head, "Steven");
 *    add_node(&head, "Tasneem");
 *    add_node(&head, "William");
 *    add_node(&head, "Zee");
 *    print_list(head);
 *    return (0);
 *}
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
