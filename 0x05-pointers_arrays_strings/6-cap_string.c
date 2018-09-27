#include <stdio.h>
#include "holberton.h"

/**
 * *cap_string - capitalizes the first letter of a word for every word
 *
 * @s: pointer to string we are altering
 * Return: altered string
 */
char *cap_string(char *s)
{
	int i, k, flag = 0;
	int array[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (k = 0; k < 13; k++)
		{
			if (*(s + i) == array[k])
			{
				flag = 0;
				k = 13;
			}
		}
		if (flag == 0 && *(s + i + 1) != '\0')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) -= 32;
			}
		}
		flag = 1;
	}
	return (s);
}
