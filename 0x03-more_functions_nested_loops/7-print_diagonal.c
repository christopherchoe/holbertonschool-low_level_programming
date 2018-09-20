#include "holberton.h"

/**
<<<<<<< HEAD
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
=======
 *
 *
 *
 */

>>>>>>> b63cc36f23e495b62a34c2c9b6ae27440d454dee
