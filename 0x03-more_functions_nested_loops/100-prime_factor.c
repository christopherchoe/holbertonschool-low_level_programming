#include "holberton.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - find and print largest prime factor of a number
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	long int i = 2, k;
	long int num;

	num = 612852475143;
	while (i < (num / 2))
	{
		if ((num % i) == 0)
		{
			num /= i;
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
=======

/**
 *
 *
 *
 */
>>>>>>> b63cc36f23e495b62a34c2c9b6ae27440d454dee

