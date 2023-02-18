#include  <stdio.h>

/**
 * main - prints all possible defferent combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, 1;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (1 > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(1);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
