#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers starting with 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double x = 1, y = 2, a;
	int z;

	printf("%.0f, %.0f, ", x, y);
	for (z = 0; z < 50; z++)
	{
		a = y;
		y += x + y;
		x = y;
		printf("%.0f", y);
		if (z != 49)
			printf(", ");
	}
	return (0);
}
