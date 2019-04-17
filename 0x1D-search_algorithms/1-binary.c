#include "search_algos.h"

/**
  * binary_search - searches for value in sorted array using binary search
  *
  * @array: sorted array to search
  * @size: size of array
  * @value: value to search for
  * Return: int of index where found first, or -1 if not found
  */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, new_size;
	int ret;

	if (size == 0 || array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (mid = 0; mid < size - 1; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = (size - 1) / 2;

	if (array[mid] == value)
		return (mid);
	else if (size == 1)
		return (-1);
	if (array[mid] > value)
		return (binary_search(array, mid, value));
	mid++;
	new_size = size % 2 ? mid - 1 : mid;
	ret = binary_search(array + mid, new_size, value);
	if (ret == -1)
		return (-1);
	return (ret + mid);
}
