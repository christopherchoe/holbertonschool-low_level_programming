#include "holberton.h"

/**
 * _isdigit - determines if argument is a digit.
 *
 * @c: int to check if is a digit 0 to 9
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

