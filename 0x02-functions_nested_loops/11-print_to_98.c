#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: starting number
 */
void print_to_98(int n)
{
	n = 1;

	while (n <= 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
