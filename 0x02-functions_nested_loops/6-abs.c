#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute
 *
 * Description: Using a unary operator, _abs returns
 * absolute value of a given integer.
 * Return: computed integer
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
