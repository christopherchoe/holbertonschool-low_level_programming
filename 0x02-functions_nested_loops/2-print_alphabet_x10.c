#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabet in lowercase and new line ten times
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	char i;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
	}
	return (0);
}

