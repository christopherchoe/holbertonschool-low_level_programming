#include "sort.h"

void partition(int *, int, int, size_t);
void swap(int *, int, int);

/**
  * quick_sort - quick sort algorithm
  *
  * @array: array to sort
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	int i = 0;

	if (array == NULL || size < 2)
		return;

	partition(array, i, size - 1, size);
}

/**
  * partition - recursive function to sort sub arrays
  *
  * @array: array to sort
  * @low: lowest index
  * @high: highest index
  * @size: size of array
  */
void partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int greater = high;
	int lesser = -1;
	int k;

	for (k = high - 1; k >= low; k--)
	{
		if (array[k] > pivot)
			greater = k;
		else
		{
			if (k != (high - 1) && lesser > (k + 1))
			{
				swap(array, lesser, k + 1);
				print_array(array, size);
				greater++;
			}
			lesser = k;
		}
	}
	if (lesser > greater)
	{
		swap(array, lesser, greater);
		print_array(array, size);
		greater++;
	}
	if (greater != high)
	{
		swap(array, greater, high);
		print_array(array, size);
	}
	if (greater - 1 > low)
		partition(array, low, greater - 1, size);
	if (greater + 1 < high)
		partition(array, greater + 1, high, size);
}

/**
  * swap - swaps the two indexes in array
  *
  * @array: array in which to swap
  * @i: first index
  * @k: second index
  */
void swap(int *array, int i, int k)
{
	int temp = array[i];

	array[i] = array[k];
	array[k] = temp;
}
