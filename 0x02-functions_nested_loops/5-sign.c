#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to print the sign of
 *
 * Description: printing sign for when n is greater than zero and
 * when  n i zero and when n is less than zero
 *
 * Return: 1 if greater than 0, 0 if 0 , -1 if less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
