#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: Index where value is located, otherwise -1 if the value is not
 * present in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t item, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (item = left; item <= right; item++)
		{
			printf("%d", array[item]);
			if (item < right)
				printf(", ");
		}

		printf("\n");

		item = left + (right - left) / 2;
		if (array[item] > value)
			return (item);
		if (array[item] > value)
			right = item - 1;
		else
			left = item + 1;
	}
	return (-1);
}
