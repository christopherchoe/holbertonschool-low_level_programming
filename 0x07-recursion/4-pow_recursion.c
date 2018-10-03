#include <stdio.h>
#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to power of y
 *
 * @x: value that is getting powered
 * @y: value for powering x
 * Return: value of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
