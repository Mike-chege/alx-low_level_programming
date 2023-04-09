#include"main.h"

/**
 * function - sets the value of a bit to 1 at a given index
 *
 * Return: 1 if it workedor -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	unsigned long int num;

	if (index > 64)
	{
		return (-1);
	}

	for (num = 1; index > 0; index--, num *= 2)
		*n += num;
	
	return (1);
}
