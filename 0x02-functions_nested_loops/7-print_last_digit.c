#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the last number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int md = n % 10;

	if (md < 0)
		md *= -1;
	_putchar(md + '0');

	return (0);
}
