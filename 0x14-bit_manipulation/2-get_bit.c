#include"main.h"

/**
 * get_bit - returns the value if a bit at a give nindex
 * @: number to get bit from
 * @index: index of the bit to get, strating from 0
 *
 * Return: value of the bit at index, or 
 * -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

