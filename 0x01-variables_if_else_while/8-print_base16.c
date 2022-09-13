#include <stdio.h>

/**
 * main - Print all hex number in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		putchar(c);
		c++;
	}

	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
