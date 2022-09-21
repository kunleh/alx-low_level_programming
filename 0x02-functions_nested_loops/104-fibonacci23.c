#include <stdio.h>
/**
 * main - prints first 98 fibonacci starting with 1 and 2
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;

	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long numx;

	for (i = 0; i <= 97; i++)
	{
		printf("%lu", num1);

		numx = num1 + num2;
		num1 = num2;
		num2 = numx;

		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
