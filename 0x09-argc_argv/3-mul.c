#include <stdio.h>
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
		printf("Error");
		return (1);
	}
	a = 0;
	product = argv[1]  argv[2];
	printf("%d\n", product);
	return (product);
}

