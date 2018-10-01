#include <stdio.h>
#include "holberton.h"

/**
 * *_strpbrk - searches a string for a set of bytes
 *
 * @s: pointer to string to search
 * @accept: pointer to bytes to search for in s
 * Return: pointer to byte in s that matches or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
				return (s + i);
		}
	}
	return (NULL);
}
