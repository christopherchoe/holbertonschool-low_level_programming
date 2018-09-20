#include "holberton.h"

/**
 * print_square - prints a square based on an argument size
 *
 * @size: the size of desired square
 * Return: void
 */
void print_square(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

