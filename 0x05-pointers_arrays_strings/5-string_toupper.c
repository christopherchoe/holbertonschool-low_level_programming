#include <stdio.h>
#include "holberton.h"

/**
 * *string_toupper - capitalizes all lowercase letters
 *
 * @s: string to capitalize
 * Return: altered string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
