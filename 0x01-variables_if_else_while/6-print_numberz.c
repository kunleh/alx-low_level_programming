#include <stdio.h>

/**
 * main - Print single digit in base ten without using char
 *
 * Return: 0
 *
 */

int main(void)
{
	int c;

	c = '0';

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);

}

