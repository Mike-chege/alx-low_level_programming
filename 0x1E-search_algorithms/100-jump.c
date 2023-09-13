#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: Index of the value, Otherwise return -1 if value is not
 * present in the array or if the array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t item, jump, step;

	if (array == NULL || size == 0)
		return (-1);
	step = sqrt(size);
	for (item = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		item = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", item, jump);
	jump = jump < size - 1 ? jump : size - 1;
	for (; item < jump && array[item] < value; item++)
		printf("Value checked array[%ld] = [%d]\n", item, array[item]);
	printf("Value checked array[%ld] = [%d]\n", item, array[item]);

	return (array[item] == value ? (int)item : -1);
}
