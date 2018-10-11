#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * *malloc_checked - allocate memory with malloc
 *
 * @b: size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
