#include <stdio.h>

/**
 * main - print possible combinaiton of two two digit
 *
 * Return: (0) for Success
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for  (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				if (k > i)
					l = 48;
				else
					l = j + i;

				for (; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					if (!(i == 57 && j == 56 && k == 57 && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
