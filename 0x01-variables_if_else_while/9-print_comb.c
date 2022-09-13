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

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 58)
		{
			putchar(",");
			putchar(" ");
		}

	}
	putchar('\n');

	return (0);
}
