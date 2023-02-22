#include "main.h"

/**
 * print_last_digit - prints the last digit of a nuber
 * @n: the int to extracct the last digit from
 * Return: value of yhe last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
