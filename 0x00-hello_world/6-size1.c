#include <stdio.h>

/**
 * main - Prints sizeof different data
 *
 * Return: 0
 *
*/


int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu", sizeof(double));
	printf("%lu\n", sizeof(long int));
	printf("%lu\n", sizeof(long long int));
	return (0);
}
