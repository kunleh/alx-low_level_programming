#include <stdio.h>

/**
 * main - print lowercase alphabet except q and e
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	c = 'a';

	while (c < 123 && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
