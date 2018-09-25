#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - prints second half of string
 *
 * @str: string to print half of
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; *(str + i) != '\0';)
		i++;
	n = i / 2;
	if (i % 2 == 1)
		n++;
	for (i = n; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
