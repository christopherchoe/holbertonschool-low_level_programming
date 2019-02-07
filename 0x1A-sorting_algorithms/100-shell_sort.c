#include "sort.h"

void insertion_sort(int *, long int, long int, size_t);

/**
  * shell_sort - sorts using shell sort and knuths sequence
  *
  * @array: array to sort
  * @size: size of array
  */
void shell_sort(int *array, size_t size)
{
	long int n = 1;
	long int i;

	if (size < 2)
		return;

	while (n < (long int)size / 3)
		n = n * 3 + 1;

	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			insertion_sort(array, i, n, size);
		}
		print_array(array, size);
		n = (n - 1) / 3;
	}
}

/**
  * insertion_sort - sorts a subarray using insertion sort
  *
  * @array: array containing sub array
  * @start: starting point of sub array
  * @n: gaps to have between sorting
  * @size: size of array
  */
void insertion_sort(int *array, long int start, long int n, size_t size)
{
	long int i, k;
	int temp;

	for (i = start; i < (long int)size; i += n)
	{
		for (k = i; k > 0 && array[k] < array[k - n]; k = k - n)
		{
			temp = array[k];
			array[k] = array[k - n];
			array[k - n] = temp;
		}
	}
}
