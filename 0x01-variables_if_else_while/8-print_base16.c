#include <stdio.h>

/**
 * main - Print all the numbers of base '16' in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	c = '0';

	while (c < 17)
	{
		putchar("%x", c);
		c++;
	}
	putchar('\n');

	return (0);
}
