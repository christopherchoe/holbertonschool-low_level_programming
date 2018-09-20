#include "holberton.h"

/**
 * _isupper - checks for an upper case character
 *
 * @c: int fed that is checked for uppercase.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

