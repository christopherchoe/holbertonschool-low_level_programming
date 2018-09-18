#include "holberton.h"

/**
 * times_table - prints out the times table of 9.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k, l;

	j = 0;
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			l = k * j;
			if (k != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (l > 9)
					_putchar((l / 10) + '0');
				else
					_putchar(' ');
			}
				_putchar((l % 10) + '0');
			if (k == 9)
			{
				_putchar('\n');
			}
		}
		j++;
	}
}
