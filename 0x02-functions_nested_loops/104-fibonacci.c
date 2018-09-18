#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x = 1, y = 2, a, b, x1, x2, y1, y2;
	int z;

	printf("%.0lu, %.0lu, ", x, y);
	for (z = 0; z < 96; z++)
	{
		a = y;
		if (z < 90)
		{
			y += x;
			x = a;
			printf("%lu", y);
		}
		else if (z == 90)
		{
			x1 = x - ((x / 10000) * 10000);
			x2 = x / 10000;
			y1 = y - ((y / 10000) * 10000);
			y2 = y / 10000;
		}
		else
		{
			a = y1;
			b = y2;
			y1 += x1;
			y2 += x2;
			if (y1 >= 10000)
			{
				y1 = y1 - (y1 / 10000) * 10000;
				y2++;
			}
			x1 = a;
			x2 = b;
			printf("%lu" ,y2);
			if (y2 < 10)
				printf("000");
			else if (y2 < 100)
				printf("00");
			else if (y2 < 1000)
				printf("0");
			printf("%lu", y1);
		}
		if (z != 95)
			printf(", ");
		else
			putchar('\n');
	}
	return (0);
}
