#include <stdio.h>

/**
 * main - program that prints numders of base 10 from 0 using putchar
 * Return: always 0
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');
	putchar('\n');

	return (0);
}
