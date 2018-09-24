#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line using \
 *
 * @n: the amount of \ we want to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = n;
		for (; n > 0; n--)
		{
			for (k = (i - n); k > 0; k--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

