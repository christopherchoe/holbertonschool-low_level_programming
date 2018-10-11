#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: how many bytes of second string to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, k, a;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; *(s2 + k) != '\0'; k++)
			;
		if (n < k)
			k = n;
	}
	k += i;
	c = malloc(sizeof(char) * (k + 1));
	if (c == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		c[a] = *(s1 + a);
	for (i = 0; a < k; i++)
		c[a++] = *(s2 + i);
	c[a] = '\0';
	return (c);
}
