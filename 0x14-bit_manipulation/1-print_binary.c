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
	
	if (n <= 1)
	{
		_putchar((n & num) + 48);
		return;
	}
	print_binary(n >> 1);
	_putchar((n & num) + 48);
}

