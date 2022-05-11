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
	free(d);
}
