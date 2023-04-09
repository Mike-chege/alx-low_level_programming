#include"main.h"

/**
 * flip_bits - gets the number of bits you would need to flip to get from 
 * 	       one number to another.
 * @n: is the first number.
 * @m: is the second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned  long int m)
{
	unsigned long int num = n ^ m;
	unsigned int bits = 0;

	while (num != 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (bits);
}

