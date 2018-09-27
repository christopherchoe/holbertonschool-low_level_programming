#include <stdio.h>
#include "holberton.h"

/**
 * *_strncat - concatenates two strings only to n
 *
 * @dest: first string
 * @src: second string
 * @n: how long to go in second string
 * Return: new string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	while ((*(dest + i++) = *src++) != '\0' && ++k < n)
		;
	return (dest);
}
