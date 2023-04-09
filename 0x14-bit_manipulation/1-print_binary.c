#include"main.h"


/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;
	int i, bit;

	for (i = 0; i < 64; i++)
	{
		bit = (n & (num << i)) ? 1 : 0;
		if (bit || i == 64)
		{
			_putchar(bit + '0');
		}
	}
}
