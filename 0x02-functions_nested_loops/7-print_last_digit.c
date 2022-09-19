#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to print its last digit
 *
 * Description: Determin last digit of n by
 * isolating nremainder of n / 10.
 * Return: extracted last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');
	return (n);
}
