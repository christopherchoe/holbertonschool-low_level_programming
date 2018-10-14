#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory for a pointer
 *
 * @ptr: pointer to old memory allocated
 * @old_size: size of memory before
 * @new_size: size of memory after
 * Return: pointer to new memory allocated
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		new[i] = *((char *)ptr + i);
	free(ptr);
	return ((void *)new);
}

