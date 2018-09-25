#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of array
 *
 * @a: array of integers
 * @n: how many elements of array to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
