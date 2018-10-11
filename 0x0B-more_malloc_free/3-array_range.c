#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * array_range - creates array of integers
 *
 * @min: minimum value to contain
 * @max: max value to contain
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		a[i] = min + i;
	return (a);
}
