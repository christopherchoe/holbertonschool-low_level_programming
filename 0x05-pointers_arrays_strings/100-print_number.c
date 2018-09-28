#include <stdio.h>
#include "holberton.h"

/**
 * print_number - prints an integer
 *
 * @n: int to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;
	unsigned int div = 1;

	if (n < 0)
		_putchar('-');
	while (num / div > 9)
		div *= 10;
	while (div > 9)
	{
		_putchar((num / div) % 10+ '0');
		div = div / 10;
	}
	_putchar(num % 10 + '0');
}
