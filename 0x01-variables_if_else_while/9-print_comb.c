#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: always 0
 */
int main(void)
{
	int d;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
