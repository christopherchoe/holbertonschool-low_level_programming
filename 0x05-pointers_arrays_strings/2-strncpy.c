#include <stdio.h>
#include "holberton.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: first string
 * @src: string to copy
 * @n: how much of string to copy
 * Return: new string in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(dest + i) = *(src + i);
	while (i < n)
		*(dest + i++) = '\0';
	return (dest);
}
