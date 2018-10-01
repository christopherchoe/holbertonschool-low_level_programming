#include <stdio.h>
#include "holberton.h"

/**
 * *_strstr - locates a substring in a string
 *
 * @haystack: pointer to string to search through
 * @needle: pointer to substring to search for
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay, *need;
	char *null = NULL;

	while (*(haystack) != '\0')
	{
		hay = haystack;
		need = needle;
		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*(need) == '\0')
			return (haystack);
		haystack++;
	}
	return (null);
}
