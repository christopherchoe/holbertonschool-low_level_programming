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
	int q;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			q = n + 1;
			for (o = m; o < 58; o++)
			{
				for (p = q; p < 58; p++)
				{
					putchar(m);
					putchar(n);
					putchar(32);
					putchar(o);
					putchar(p);
					if (m != 57 || n != 56 || o != 57 || p != 57)
					{
						putchar(44);
						putchar(32);
					}
					q++;
				}
				q = 48;
			}
		}
	}
	putchar(10);
	return (0);
}
