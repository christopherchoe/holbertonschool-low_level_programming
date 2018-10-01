#include <stdio.h>
#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a[8]: pointer to 2D 8x8 array
 * Return: void, prints chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, k, size;

	for (i = 0; **(a + i) != '\0'; i++)
		;
	size = i;
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(*(*(a + i) + k));
		}
		_putchar('\n');
	}
}
