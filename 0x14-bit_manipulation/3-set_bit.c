#include"main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: is a pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: -1 if error occurs an 1 if successful.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
