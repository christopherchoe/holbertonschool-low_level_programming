#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int o;
	int p;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			for (o = m; o < 58; o++)
			{
				for (p = n + 1; p < 58; p++)
				{
					if (n != 58 || m != 57 || o != 58 || p != 58)
					{
						putchar(m);
						putchar(n);
						putchar(32);
						putchar(o);
						putchar(p);
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
