#include"main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: is the index, starting from 0 of 
 * the bit you want to set.
 *
 * Returns: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsinged long int * 8)
		return (-1);


	*n &= ~(1UL << index);

	return (1);
}			
