#include <stdio.h>

/**
 * main - Print all possible combination of single digits sepaprated by comma
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar("%d ,", i);

	}
	putchar('\n');

	return (0);
}
