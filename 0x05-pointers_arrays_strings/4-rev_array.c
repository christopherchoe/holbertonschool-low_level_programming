#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverses positions in an int array
 *
 * @a: array to reverse
 * @n: how long the array is
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = b;
	}
}

