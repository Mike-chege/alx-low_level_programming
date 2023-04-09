#include"main.h"

/**
 * get_bit - returns the value if a bit at a given index.
 * @n: number to get bit from.
 * @index: index of the bit to get, starting from 0.
 *
 * Return: -1 if an error occurs or 1 if successful.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

