#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;
	int i, bit;

	for (i = 0; i < 64; i++)
	{
		bit = (n & (num << i)) ? 1 : 0;
	      	if (bit || i == 63)
		{
	       		_putchar(bit + '0');
		}
	}
}
