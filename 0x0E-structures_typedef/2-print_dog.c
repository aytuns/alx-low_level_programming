#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * int main(void)
 * {
 *    struct dog my_dog;
 *
 *    my_dog.name = "Poppy";
 *    my_dog.age = 3.5;
 *    my_dog.owner = "Bob";
 *    print_dog(&my_dog);
 *    return (0);
 * }
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}

