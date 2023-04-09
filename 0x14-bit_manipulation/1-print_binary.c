#include"main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int num = 1;
    int i, bit;

    for (i = 0; i < 64; i++)
    {      
        bit = (n & num) ? 1 : 0;
        if (bit || i == 63)
        {
            _putchar(bit + '0');
        }

        num <<= 1;
    }
}

