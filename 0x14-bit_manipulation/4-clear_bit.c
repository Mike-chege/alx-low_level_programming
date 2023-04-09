#include"main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: is the pointer to the bit.
 *
 * Return: -1 if an error occured or 1 if successful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);


	*n &= ~(1UL << index);

	return (1);
}			
