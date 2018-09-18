#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3 and 5 below 1024.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double l;
	int i, k;

	for (i = 0; i < 1024; i += 3)
		l += i;
	for (k = 0; k < 1024; k += 5)
	{
		if ((k % 3) != 0)
			l += k;
	}
	printf("%.0f\n", l);
	return (0);
}
