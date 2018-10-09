#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiplies two numbers
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: product or 1 if error (success)
 */
int main(int argc, char *argv[])
{
	int product, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;
	printf("%d\n", product);
	return (0);
}

