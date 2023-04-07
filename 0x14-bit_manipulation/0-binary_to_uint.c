#include<stdio.h>
#include "main.h"

/**
 * function that converts a binary number to an unsigned int
 * @b: points char string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int result = 0, bin = 1;
	int i;

	if (b == '\0')
		return (0);

	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bin += (b[i] - '0') * result;
		result *= 2;
	}

	return (result);
}
