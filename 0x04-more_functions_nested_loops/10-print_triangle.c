#include "main.h"

/**
 * print_triangle - function that prints a triangle followed by new line
 * @n: size of triangle
 */
void print_triangle(int n)
{
	int h, b;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (b = n - h; b > 0; b--)
				_putchar(' ');

			for (b = 0; b < h; b++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
