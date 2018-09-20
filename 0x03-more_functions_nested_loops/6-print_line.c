#include "holberton.h"

/**
 * print_line - prints a straight line based on a int argument
 *
 * @n: number of times to print _
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
