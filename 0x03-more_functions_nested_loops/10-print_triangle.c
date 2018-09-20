#include "holberton.h"

/**
 * print_triangle - prints a triangle right aligned based on arugment
 *
 * @size: size of triangle height
 * Return: void
 */
void print_triangle(int size)
{
	int i, k = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; size > 0; size--)
		{
			for (i = size; i > 1; i--)
				_putchar(' ');
			for (i = (k - size); i >= 0; i--)
				_putchar('#');
			_putchar('\n');
		}
	}
}

