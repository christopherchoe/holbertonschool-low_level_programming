#include <stdio.h>
#include "holberton.h"

int addi(char *n2, char *r, int, int, int, int);

/**
 * *infinite_add - adds two numbers in a buffer sized to size_r
 * only positive numbers or 0 and only digits in the string. The
 * strings must not be empty and if it cannot be stored in r, it
 * will return 0 instead of the sum
 *
 * @n1: first number string
 * @n2: second number string
 * @r: buffer to store sum
 * @size_r: size of the buffer r
 * Return: char pointer for result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len, n2_len;
	int i, max, flag;

	for (n1_len = 0; *(n1 + n1_len); n1_len++)
		;
	for (n2_len = 0; *(n2 + n2_len); n2_len++)
		;
	if (++n1_len > size_r || ++n2_len > size_r)
		return (0);
	if (n1_len > n2_len)
		max = n1_len;
	else
		max = n2_len;
	n1_len -= max;
	n2_len -= max;
	for (i = 0; i < max - 1; i++)
	{
		if (n1_len >= 0)
			*(r + i) = *(n1 + n1_len);
		*(r + i + 1) = '\0';
		if (n2_len >= 0)
		{
			flag = addi(n2, r, size_r, i, n2_len, max);
			if (flag == 0)
				return (0);
			if (flag < 0)
			{
				i++;
				max++;
			}
		}
		n1_len++;
		n2_len++;
	}
	return (r);
}

int addi(char *n2, char *r, int size_r, int i, int n2_len, int max)
{
	int n, temp;

	n = i;

	*(r + i) += *(n2 + n2_len) - '0';
	while (*(r + n) > '9')
	{
		*(r + n) -= 10;
		if (n > 0)
		{
			n--;
			*(r + n) += 1;
		}
		else
		{
			if (max + 1 > size_r)
				return (0);
			*(r + max) = '\0';
			temp = *(r);
			*(r) = '1';
			for (n = 1; n <= i + 1; n++)
			{
				*(r + n) = temp;
				if (*(r + n + 1) != '\0')
					temp = *(r + n + 1);
			}
			*(r + max) = '\0';
			return (-1);
		}
	}
	return (1);
}
