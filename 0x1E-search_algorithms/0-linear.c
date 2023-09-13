#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: Index where the value is located, otherwise return -1
 * if array is NULL or if value is not present in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t item;

	if (array == NULL)
		return (-1);
	for (item = 0; item < size; item++)
	{
		printf("Value checked array[%ld] = [%d]\n", item, array[item]);
		if (array[item] == value)
			return (item);
	}

	return (-1);
}
