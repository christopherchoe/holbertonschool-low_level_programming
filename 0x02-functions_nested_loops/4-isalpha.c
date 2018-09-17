#include "holberton.h"
#include <stdio.h>

/**
 * _isalpha - checks for an alphabetical character
 *
 * @c: given character to check alpha or not.
 * Return: 1 if c is alpha, 1 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

