#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 97;
	while (n < 123)
		putchar(n++);
	putchar(10);
	return (0);
}
