#include <stdio.h>
#include "holberton.h"

/**
 * main - prints number of arguments
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", argc - 1);
	return (0);
}

