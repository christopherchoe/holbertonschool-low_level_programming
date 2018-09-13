#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int o;
	int p;
	int q;

	q = 48;
	for (p = q; p < 56; p++)
	{
		o = q;
		for (n = o; n < 58; n++)
		{
			for (m = o; m < 58; m++)
			{
				if (n != m && p != n && p != m)
				{
					putchar(p);
					putchar(n);
					putchar(m);
					if (p != 55 || n != 56 || m != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
			o++;
		}
		q++;
	}
	putchar(10);
	return (0);
}
