#include <stdio.h>
#include "holberton.h"

int sqr(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find square root of
 * Return: natural square root of number, if none return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqr(n, n));
	}
}

/**
 * sqr - checks square root of a number a
 *
 * @a: first int that we are checking for square
 * @b: second int checking for square
 * Return: int of square root or -1 if none
 */
int sqr(int a, int b)
{
	if (b == 0)
		return (-1);
	else if (a % b == 0 && a / b == b)
		return (b);
	else
		return (sqr(a, b - 1));
}
