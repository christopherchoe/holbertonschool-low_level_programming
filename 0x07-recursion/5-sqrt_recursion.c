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
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (sqr(n, 1));
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
	if (b > a / 2)
		return (- 1);
	else if(b * b == a)
		return (b);
	else
		return (sqr(a, b + 1));
}
