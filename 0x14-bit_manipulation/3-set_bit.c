#include"main.h"

/**
 * function - sets the value of a bit to 1 at a given index
 *
 * Return: 1 if it workedor -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	if (index >= sizeof(unsigned long int) *8)
	{
		return 0;
	}

	*1 |= (1UL << index);
	
	return 1;
}
	
