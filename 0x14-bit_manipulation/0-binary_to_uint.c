#include "main.h"

/**
 * function that convert a binary number to an unsigned int
 * @b: ponter to char string
 *
 * Return: converted decimal number or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, bin;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (bin = 1, result = 0, i--; i >= 0; i--, bin *= 2)
	{
		if (b[i] == '1')
		{
			result += bin;
		}
	}

	return (result);
}
