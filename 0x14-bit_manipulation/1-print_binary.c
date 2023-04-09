#include"main.h"


/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	
	for (int i = 63; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}
