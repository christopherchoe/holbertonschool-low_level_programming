#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - prints string, reverse of a string followed by a new line
 *
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
	_putchar('\n');
	for (; i > 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
