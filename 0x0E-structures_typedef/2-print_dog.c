#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the content of the struct dog
 * @d: the dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	struct dog *d_dog;

	d_dog = malloc(sizeof(struct dog));

	d_dog->name = d.name;
	d_dog->age = d.age;
	d_dog->owner = d.owner;
	if (d.name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %c\n", d_dog->name);
	if (d.age == NULL)
		printf("Age: (nil)\n");
	printf("Age: %d\n", d_dog->age);
	if (d.owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d_dog->owner);
	if (d == NULL)
		printf("");
}
