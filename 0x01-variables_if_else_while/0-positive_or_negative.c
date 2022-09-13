#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - changes the value of n
 *
 * Return: 0
 *
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n < 0)
		{
		printf("The number is negative");
		}
		else
		{
		printf("The number is positive");
		}
		return (0);
}
