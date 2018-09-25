#include <stdio.h>
#include "holberton.h"

/**
 * *_strcpy - copies string to buffer both arguments
 *
 * @dest: the buffer to copy string to
 * @src: source string to copy from
 * Return: pointer to the buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
