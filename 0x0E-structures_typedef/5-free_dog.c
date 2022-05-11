#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the dog
 * @d: the dog struct
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
