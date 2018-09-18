#include "holberton.h"

/**
 * print_times_table - Prints times tables for however many n.
 *
 * @n: integer to print n times table.
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				k = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (k < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						if (k < 100)
						{
							_putchar(' ');
							_putchar((k / 10) + '0');
						}
						else
						{
							_putchar((k / 100) + '0');
							_putchar(((k % 100) / 10) + '0');
						}
					}
				}
				_putchar((k % 10) + '0');
			}
			j = 0;
			_putchar('\n');
		}
	}
}
