#include <stdio.h>

/**
 * main - print sum of even values in fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double x = 1, y = 2, a, b = 2;
	int z = 0;

	while (y < 4000000)
	{
		a = y;
		y += x;
		x = a;
		z++;
		if (z = 2)
			b += y;
	}
	printf("%.0f\n", b);
	return (0);
}
