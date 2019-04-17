#include "search_algos.h"

/**
  * exponential_search - searches for value using exponential search
  *
  * @array: array to search
  * @size: size of array
  * @value: value to search for
  * Return: int of index where value is found or -1 if not found
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high, mid;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			break;
		i *= 2;
	}
	low = i / 2;
	high = i < size ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		i = low;
		mid = low + ((high - low) / 2);
		printf("Searching in array: ");
		while (low < high)
			printf("%d, ", array[low++]);
		printf("%d\n", array[low++]);
		if (array[mid] == value)
			return (mid);
		else if (low == high)
			break;
		if (array[mid] > value)
		{
			low = i;
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
