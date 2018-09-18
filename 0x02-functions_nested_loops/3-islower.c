#include "holberton.h"

/**
 * _islower - checks if char is lower case
 *
 * @c: given character to check lower or not.
 * Return: 1 if c is lower, 1 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

