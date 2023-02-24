#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');

		c++;
	}
	_putchar('\n');
}
