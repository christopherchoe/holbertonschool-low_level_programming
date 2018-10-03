#include <stdio.h>
#include "holberton.h"

int check_prime(int a, int b);

/**
 * is_prime_number - checks if int is a prime number
 *
 * @n: int to check if prime
 * Return: int 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (check_prime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * check_prime - checks if an int a is divisible by b
 *
 * @a: checking divisibility
 * @b: checking if multiple of a
 * Return: the int that is divisible
 */
int check_prime(int a, int b)
{
	if (a == 1)
		return (0);
	if (b == 1)
		return (1);
	if (a % b == 0)
		return (0);
	else
		return (check_prime(a, b - 1));
}
