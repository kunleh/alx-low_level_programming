#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	c = 'a';

	while (c < 123)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
