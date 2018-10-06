#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int _atoi(char *s);

/**
 * main - adds two strings, prints error if not digits in string
 *
 * @argc: argument count
 * @argv: arguments
 * Return: 1 if error , 0 if no number, sum otherwise
 */
int main(int argc, char *argv[])
{
	int a, i, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		a = _atoi(argv[i]);
		if (argv[i][0] != '0' && a == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
	printf("%d\n", sum);
	return (sum);
}

/**
 * _atoi - return a num inside of a string
 *
 * @s: pointer for string to parse
 * Return: int pulled from string, 0 if none
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int flag = -1, i = 0, neg = 1;

	if (*s == '\0')
		flag = 1;
	for (i = 0; flag == -1; i++)
	{
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (num != 0)
				num = ((num * 10) + (*(s + i) - '0'));
			else
				num = (*(s + i) - '0');
		}
		else if (*(s + i + 1) == '\0')
		{
			flag = 1;
		}
		else
		{
			return (0);
		}
		if (num != 0)
		{
			if ((*(s + i + 1) < '0') || (*(s + i + 1) > '9'))
				flag = 0;
		}
	}
	return (neg * num);
}
