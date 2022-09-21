#include "main.h"
/**
 * main - function that prints sum of
 * multiple of 3 and 5 below 1024
 *
 * Description: a program that prints sum of multiples
 * of 3 and 5 below 1024
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
			i++;
	}
	_putchar("%d\n", sum);

	return (0);
}
