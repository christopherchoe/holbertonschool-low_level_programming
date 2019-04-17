#include "search_algos.h"

/**
  * advanced_binary - returning the first index of instance
  *
  * @array: array to search
  * @size: size of array
  * @value: value to search for
  * Return: int of first index with instance of value, or -1 if not found
  */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int ret;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	mid = size % 2 ? size / 2 : size / 2 - 1;

	while (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		else
			return (mid);
	}
	if (size == 1)
		return (-1);

	if (array[mid] > value)
	{
		while (mid < size - 1 && array[mid + 1] == array[mid])
			mid++;
		return (advanced_binary(array, mid, value));
	}
	else
	{
		mid++;
		while (mid > 0 && array[mid - 1] == array[mid])
			mid--;
		ret = advanced_binary(array + mid, size - mid, value);
		if (ret != -1)
			return (mid + ret);
	}
	return (-1);
}
