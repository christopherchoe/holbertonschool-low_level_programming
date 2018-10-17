#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: array to search within
 * @size: size of array
 * @cmp: comparison function
 * Return: -1 if no match or size <= 0, else index that matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}

