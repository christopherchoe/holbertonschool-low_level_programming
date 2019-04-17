#include "search_algos.h"

/**
  * jump_search - jump search of sorted array
  *
  * @array: array to search
  * @size: size of array
  * @value: value to find
  * Return: int of index or -1 if not found
  */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i, flag, jump;

	jump = (unsigned int)sqrt(size);

	i = flag = 0;

	while (array != NULL && i < jump + size)
	{
		if (flag == 0 && (i > size || array[i] >= value))
		{
			printf("Value found between indexes [%u] and [%u]\n", i - jump, i);
			size = i > size ? i - jump : i;
			i = i - jump;
			jump = flag = 1;
		}
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i = size == 1 ? i - 1 : i + jump;
	}

	return (-1);
}
