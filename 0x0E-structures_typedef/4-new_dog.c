#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 *
 * int main(void)
 * {
 *    dog_t *my_dog;
 *
 *    my_dog = new_dog("Poppy", 3.5, "Bob");
 *    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
 *    return (0);
 * }
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	(*dog).name = malloc(sizeof(char) * (strlen(name) + 1));
	(*dog).owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dog == NULL || (*dog).name == NULL || (*dog).owner == NULL)
	return (NULL);

	strcpy((*dog).name, name);
	strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}

