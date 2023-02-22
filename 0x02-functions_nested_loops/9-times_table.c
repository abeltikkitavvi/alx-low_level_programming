#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n, m, r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = m * n;
			if (m == 0)
			{
				_putchar(r + '0');
			}

			if (r < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
