#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, h;

		for (l = 0; l < size; l++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
