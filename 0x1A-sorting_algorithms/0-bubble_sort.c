#include "sort.h"

/**
 *  bubble_sort - Sorts an array using bubble-sorting algorithms
 *  @array: The array to sort
 *  @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t index2 = 1;
	int end_flag = 1;
	size_t i;

	if (size < 2)
		return;

	for (i = 0; i < size && end_flag; i += 1)
	{
		end_flag = 0;
		index2 = 1;
		while (index2 != size)
		{
			if (array[index2 - 1] > array[index2])
			{
				swap_int(array, index2, size);
				end_flag = 1;
			}
			index2 += 1;
		}
	}
}

/**
 * swap_int - Swaps two integer values
 * @array: The whole array
 * @index: The first index
 * @size: the size of the array
 *
 */
void swap_int(int *array, int index, size_t size)
{
	int temp = array[index - 1];

	array[index - 1] = array[index];
	array[index] = temp;
	print_array(array, size);
}

