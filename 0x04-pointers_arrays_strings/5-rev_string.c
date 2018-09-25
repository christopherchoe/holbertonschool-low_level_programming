#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i, k;
	char q;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	for (k = 1; k <= (i / 2); k++)
	{
		q = *(s + i - k);
		*(s + i - k) = *(s + (k - 1));
		*(s + (k - 1)) = q;
	}
}
