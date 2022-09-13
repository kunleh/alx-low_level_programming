#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{

	char alphabet;

	alphabet = 'a';
	putchar("Lowercase alphabets:\n");
	while (alphabet <= 'z')
	{
		putchar("$c\n", alphabet);
		alphabet++;
	}
	return (0);

}
