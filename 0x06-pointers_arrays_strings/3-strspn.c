#include <stdio.h>
#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 *
 * @s: pointer to string to search
 * @accept: pointer to string to search for
 * Return: unsigned int of how many bytes long first instance is
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				len++;
				break;
			}
		}
		if (len != 0 && *(accept + k) == '\0')
			return (len);
	}
	return (0);
}
