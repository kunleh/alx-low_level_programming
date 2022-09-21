#include "main.h"
/**
 * prints_sum_multiples - function that prints sum of
 * multiple of 3 and 5 below 1024
 * @sum: sum to print
 *
 * Description: a program that prints sum of multiples
 * of 3 and 5 below 1024
 */
int print_sum_multiples(int sum)
{
	int i, j;
	i = 0;
	j = 1024;

	while (i < j)
	{
		if (i % 3 == 0)
			_putchar("%d ", i);
		i++;
	}
}
