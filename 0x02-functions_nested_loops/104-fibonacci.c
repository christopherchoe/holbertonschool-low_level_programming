#include <stdio.h>

int fib_long(long int, long int, long int, long int);

/**
 * main - prints first 98 fibonacci numbers starting with 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x = 1, y = 2, a, b, x1, x2, y1, y2, z;

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
		else
		{
			if (z == 90)
			{
				x1 = x - ((x / 10000) * 10000);
				x2 = x / 10000;
				y1 = y - ((y / 10000) * 10000);
				y2 = y / 10000;
			}
			a = fib_long(y1, y2, x1, x2);
			if ((y1 + x1) >= 10000)
			{
				y2++;
				b = y2 - 1;
			}
			else
				b = y2;
			x1 = y1;
			y1 = a;
			y2 += x2;
			x2 = b;
		}
		if (z != 95)
			printf(", ");
		else
			putchar('\n');
	}
	return (0);
}

/**
 * fib_long - combine fibonacci numbers that overflow
 *
 * @d1: first y part
 * @d2: second y part
 * @c1: first x part
 * @c2: second x part
 * Return: new second y part
 */
int fib_long(long int d1, long int d2, long int c1, long int c2)
{
	d1 += c1;
	d2 += c2;
	if (d1 >= 10000)
	{
		d1 = d1 - (d1 / 10000) * 10000;
		d2++;
	}
	printf("%lu", d2);
	if (d2 < 10)
		printf("000");
	else if (d2 < 100)
		printf("00");
	else if (d2 < 1000)
		printf("0");
	printf("%lu", d1);
	return (d1);
}
