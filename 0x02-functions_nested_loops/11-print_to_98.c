#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints from a given digit to 98 in natural numbers.
 *
 * @n: integer to start from.
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
