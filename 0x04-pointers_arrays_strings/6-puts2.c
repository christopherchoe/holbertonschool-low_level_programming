#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - prints one character of two
 *
 * @str: string to print one character of
 * Return: void
 */
void puts2(char *star)
{
	int i;

	for (i = 0; *(star + i) != '\0'; i += 2)
	{
		_putchar(*(star + i));
	}
	_putchar('\n');
}
