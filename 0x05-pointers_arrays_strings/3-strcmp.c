#include <stdio.h>
#include "holberton.h"

/**
 * *_strcmp - compares two string
 *
 * @s1: first string
 * @s2: second string
 * Return: int difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int str1 = 0, str2 = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
			str1 += *s1++;
		if (*s2 != '\0')
			str2 += *s2++;
	}
	if ((str1 - str2) > 0)
		return (15);
	else if ((str1 - str2) < 0)
		return (-15);
	else
		return (0);
}
