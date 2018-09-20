#include "holberton.h"

/**
 * print_numbers - prints from 0 to 9 and new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar(10);
}

