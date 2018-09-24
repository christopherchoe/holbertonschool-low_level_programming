#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first int pointer
 * @b: second int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
