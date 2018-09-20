#include "holberton.h"
#include <stdio.h>

/**
 * main - find and print largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;
	long int num;

	i = 2;
	num = 612852475143;
	while (i < (num / 2))
	{
		if ((num % i) == 0)
		{
			num = num / i;
			i = 2;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", num);
	return (0);
}

