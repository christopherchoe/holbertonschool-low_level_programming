#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments
 *
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

