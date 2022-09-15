#include "main.h"

/**
 * main - Prints _putchar as a string
 *
 * Return: 0
 */

int main(void)
{

	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int cnt, siz;

	siz = sizeof(str) / sizeof(int);
	for (cnt = 0; cnt < siz; cnt++)
	{
		_putchar(str[cnt]);
	}
	_putchar('\n');

	return (0);
}
