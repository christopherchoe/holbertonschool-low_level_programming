#include <stdio.h>
#include "holberton.h"

/**
 * *_memset - fills n bytes of memory with a constant byte
 *
 * @s: pointer to string to change
 * @b: constant byte to use to replace
 * @n: amount of bytes to replace
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
