#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double x = 1, y = 2, a;
	int z;

	printf("%.0Lf, %.0Lf, ", x, y);
	for (z = 0; z < 95; z++)
	{
		a = y;
		y += x;
		x = a;
		printf("%.0Lf", y);
		if (z != 94)
			printf(", ");
		else
			putchar('\n');
	}
	return (0);
}
