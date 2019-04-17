#include "search_algos.h"

/**
  * linear_search - searches for value in array using linear search
  *
  * @array: array to search
  * @size: size of array
  * @value: value to find
  * Return: int of first index with match or -1 if no match
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

