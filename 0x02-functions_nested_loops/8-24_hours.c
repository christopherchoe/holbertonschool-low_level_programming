#include "holberton.h"

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	i = 0;
	while (i < 3)
	{
		j = 0;
		if (i != 2)
			m = 10;
		else
			m = 4;
		while (j < m)
		{
			k = 0;
			while (k < 6)
			{
				l = 0;
				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
