#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints minimum number of coins for amount of money
 *
 * @argc: argument count
 * @argv: arguments
 * Return: 1 if wrong number of arguments, 0 if negative number,
 * number of coins otherwise.
 */
int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	if (money / 25 > 0)
	{
		coins += money / 25;
		money = money % 25;
	}
	if (money / 10 > 0)
	{
		coins += money / 10;
		money = money % 10;
	}
	if (money / 5 > 0)
	{
		coins += money / 5;
		money = money % 5;
	}
	if (money / 2 > 0)
	{
		coins += money / 2;
		money = money % 2;
	}
	if (money != 0)
		coins++;
	printf("%d\n", coins);
	return (0);
}

