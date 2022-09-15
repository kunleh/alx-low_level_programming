#include <main.h>

/**
 * main - Print alphabet
 *
 * Return: 0
 *
 */
int main(void)
{
	char c;

	c = '97';

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);

}
