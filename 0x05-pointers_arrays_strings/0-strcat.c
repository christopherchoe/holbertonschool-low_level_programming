#include <stdio.h>
#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * Return: concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, k = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	while ((*(dest + i + k) = *src++) != '\0')
		k++;
	return (dest);
}
