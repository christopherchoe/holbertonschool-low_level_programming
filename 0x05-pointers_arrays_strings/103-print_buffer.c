#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - prints a buffer in a very particular format
 *
 * @b: buffer to print through
 * @size: amount of bytes to go through buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, count = 0, limit = size;

	if (size % 10 != 0)
		limit = ((size / 10) + 1) * 10;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < limit; i++)
	{
		if (count++ % 10 == 0)
		{
			printf("%08x: ", i);
		}
		if (i < size)
			printf("%02x", *(b + i));
		else
			printf("  ");
		if (i % 2 != 0)
			printf(" ");
		if (count == 10)
		{
			for (count = i - 9; count <= i; count++)
			{
				if (*(b + count) > 31 && count < size)
					printf("%c", *(b + count));
				else if (count < size)
					printf(".");
			}
			printf("\n");
			count = 0;
		}
	}
}
