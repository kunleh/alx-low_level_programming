#include "main.h"
/**
 * jack_bauer - prints every minute
 * of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Description: Using nested while loops,
 * count up through every minute of the day
 * and print.
 *
 */
void jack_bauer(void)
{	int hour = 0;
	int m1;
	int m2;

	while (hour <= 23)
	{
		m1 = 0;
		while (m1 <= 5)
		{
			m2 = 0;
			while  (m2 <= 9)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
				_putchar(':');
				_putchar(m1 + '0');
				_putchar(m2 + '0');
				_putchar('\n');

				m2++;
			}
			m1++;

		}
		hour++;
	}
}
