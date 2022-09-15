#include "main.h"
/**
 * print_alphabet - print alphabet ten times
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;
	
	for (int i = 0;i < 10;i++)
	{
	for (c = 'a';c <= 'z';,c++)
	{
		_putchar(c);
	}

	_putchar('\n');
	}
}
