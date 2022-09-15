#include "main.h"

/**
 * main - Print alphabet
 *
 * Return: 0
 *
 */
int main(void)
{
	char c;

	c = 'a';

	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);

}
