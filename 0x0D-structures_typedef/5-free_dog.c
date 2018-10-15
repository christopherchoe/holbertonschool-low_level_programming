#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 *
 * @d: pointer to dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
