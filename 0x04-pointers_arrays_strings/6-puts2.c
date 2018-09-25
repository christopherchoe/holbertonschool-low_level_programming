#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - prints one character of two
 *
 * @star: string to print one character of
 * Return: void
 */
void puts2(char *star)
{
	int i;

	for (i = 0; *(star + i) != '\0'; i++)
	{
		_putchar(*(star + i));
		if (*(star + i + 1) != '\0')
			i++;
	}
	_putchar('\n');
}
