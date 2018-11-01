#include "holberton.h"

/**
  * get_bit - gets a bit at a given index
  * @n: number to find bit for
  * @index: index to find bit at
  * Return: value of bit at index or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pow = 1;

	if (n == 0)
		return (0);
	while (pow < index)
		pow *= 2;
	if (pow > n)
		return (-1);
	while (index != 0)
	{
		index--;
		n = n >> 1;
	}
	if (n == (n | 1))
		return (1);
	else
		return (0);
}

