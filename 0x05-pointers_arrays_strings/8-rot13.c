#include <stdio.h>
#include "holberton.h"

/**
 * *rot13 - encodes to rot13
 *
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, n, r = 13;
	int array[] = {'a', 'n', 'A', 'N', 'b', 'o', 'B', 'O', 'c', 'p', 'C',
		'P', 'd', 'q', 'D', 'Q', 'e', 'r', 'E', 'R', 'f', 's', 'F',
		'S', 'g', 't', 'G', 'T', 'h', 'u', 'H', 'U', 'i', 'v', 'I',
		'V', 'j', 'w', 'J', 'W', 'k', 'x', 'K', 'X', 'l', 'y', 'L',
		'Y', 'm', 'z', 'M', 'Z'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (*(s + i) == array[n])
			{
				*(s + i) += r;
				n = 52;
			}
			r *= -1;
		}
		r = 13;
	}
	return (s);
}
