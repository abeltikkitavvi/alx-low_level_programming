#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of '_' to be printed
 */
void print_line(int n)
{
	int das;

	if (n > 0)
	{
		for (das = 0; das < n; das++)
			_putchar('_');
	}

	_putchar('\n');
}
