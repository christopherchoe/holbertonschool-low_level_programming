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

	o = 48;
	for (n = o; n < 58; n++)
	{
		for (m = o; m < 58; m++)
		{
			if (n != m)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		o++;
	}
	putchar(10);
	return (0);
}
