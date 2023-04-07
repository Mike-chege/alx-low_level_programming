#include<stdio.h>
#include "main.h"

/**
 * function that converts a binary number to an unsigned int
 * @b: points char string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int result, bin;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == 'i')
		{
			result += bin;
		}
		bin *= 2;
	}

	return (result);
}
