#include <stdio.h>

/**
 * main - Print all single digit number
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	c = '0';

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
