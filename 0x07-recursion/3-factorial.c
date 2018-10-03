#include <stdio.h>
#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: number to get factorial of
 * Return: factorial that is calculated
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (n);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
