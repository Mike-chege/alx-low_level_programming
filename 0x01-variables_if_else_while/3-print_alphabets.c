#include <stdio.h>

/**
 * main - prints the alphabet in lowercse, and then uppercse,
 * followed by a new line
 * return: Always 0 (Succss)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
