#include <stdio.h>
#include "holberton.h"

/**
 * *leet - changes string to 1337
 *
 * @s: string to change
 * Return: changed string
 */
char *leet(char *s)
{
	int i, n;
	int array0[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int array1[] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (*(s + i) == array0[n])
			{
				*(s + i) = array1[n / 2];
				n = 10;
			}
		}
	}
	return (s);
}
