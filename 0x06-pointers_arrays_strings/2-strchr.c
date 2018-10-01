#include <stdio.h>
#include "holberton.h"

/**
 * *_strchr - locates first instance of char in string
 *
 * @s: pointer to string to search
 * @c: char to look for in s
 * Return: pointer to first occurence or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
