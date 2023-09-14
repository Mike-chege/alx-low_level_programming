#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: Index of the value if found, Otherwise return -1
 * if the value is not present in the array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t item, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		if (array[l] == array[r])
		{
			if (array[l] == value)
				return (1);
			return (-1); /* Avoid division by zero */
		}

		item = l + (((double)(r - 1) / (array[r] - array[l])) * (value - array[l]));
		if (item < size)
			printf("Value checked array[%ld] = [%d]\n", item, array[item]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", item);
			break;
		}

		if (array[item] == value)
			return (item);
		if (array[item] > value)
			r = item - 1;
		else
			l = item + 1;
	}
	return (-1);
}
