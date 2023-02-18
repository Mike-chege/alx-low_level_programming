#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by s new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char;
	
	for (n = 47; n < 58; n++)
	{
		putchar(n);
	}
	for  (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
