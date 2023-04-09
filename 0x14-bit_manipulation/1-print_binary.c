#include"main.h"

/**
 * print_binary-prints the binary representation of a number
 * @n: number to print in binary
 *
 * Retrun: void
 */
void print_binary(unsigned long int n)
{
	int num = 0;
	unsigned long int bit = n;

	if (n==0)
	{
		_putchar('0');
		return;
	}
	while (bit>0)
	{
		bit >>= 1;
		num++;
	}

	for (num--;num >= 0; num--)
	{
		if ((n & (1 << num)) >> num)
			_putchar('1);
	
	else
		putchar('0');
	}
}
