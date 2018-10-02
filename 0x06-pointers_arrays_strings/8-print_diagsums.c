#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the diagonals in a 2D array
 *
 * @a: array pointer
 * @size: size of array rows and columns
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, k;
	int sum = 0;

	for (i = 0; i <= size * size; i += size + 1)
	{
		if (size <= 0)
			break;
		sum += *(a + i);
	}
	printf("%d, ", sum);
	sum = 0;
	for (k = size - 1; k <= size * size - size; k += size - 1)
	{
		if (size <= 0)
			break;
		sum += *(a + k);
	}
	printf("%d\n", sum);
	sum = 0;
}

