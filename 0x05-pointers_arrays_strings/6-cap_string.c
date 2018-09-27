#include <stdio.h>
#include "holberton.h"

/**
 * *cap_string - capitalizes the first letter of a word for every word
 *
 * @s: pointer to string we are altering
 * Return: altered string
 */
char *cap_string(char *s)
{
	int i, k, n = 32;
	int array[] = {',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}', '\n', '\t', ' '};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= n;
		}
		n = 0;
		for (k = 0; k < 13; k++)
		{
			if (*(s + i) == array[k])
			{
				k = 13;
				n = 32;
			}
		}
	}
	return (s);
}
