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

	c = 'z';

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
