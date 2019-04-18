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

	jump = sqrt(size);

	i = flag = 0;

	while (array != NULL && (i < jump + size || size == 0))
	{
		if (flag == 0 && (i > size || array[i] >= value))
		{
			if (i < jump)
				jump = 0;
			printf("Value found between indexes [%u] and [%u]\n", i - jump, i);
			size = i > size ? i - jump : i;
			i = i - jump;
			jump = flag = 1;
		}
		if ((size == 1 && i == 1) || size == 0)
			break;
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i += jump;
	}

	return (-1);
}
