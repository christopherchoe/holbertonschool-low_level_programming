#include <stdio.h>
#include "holberton.h"

/**
 * set_string - set value of pointer to a char
 *
 * @s: pointer to pointer to char to change
 * @to: pointer to char to change s to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
