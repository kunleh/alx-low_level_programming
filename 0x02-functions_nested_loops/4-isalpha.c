#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be checked
 *
 * Description: Determines whether or not a
 * character is alphabetic by running it through
 * multiple conditionals via an if else statement.
 *
 * Return: 1 on success, 0 on failure
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c < 97)
		return (1);
	else
		return (0);
}
