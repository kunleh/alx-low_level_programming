#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The letter to be compared
 *
 * Return: 1 on success (arg is lowercase)
 * else errno 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
