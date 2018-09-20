#include "holberton.h"

/**
<<<<<<< HEAD
 * more_numbers - prints from 0 to 14 and a new line, ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{
			if ((i / 10) != 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
=======
 *
 *
 *
 */

>>>>>>> b63cc36f23e495b62a34c2c9b6ae27440d454dee
