#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements of array
 * @size: size of each element of array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		a[i] = 0;
	return ((void *) a);
}
