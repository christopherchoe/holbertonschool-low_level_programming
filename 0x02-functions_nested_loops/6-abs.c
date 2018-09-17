#include "holberton.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: integer that is being made absolute.
 * Return: absolute value of an integer.
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
