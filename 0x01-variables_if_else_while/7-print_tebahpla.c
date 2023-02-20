#include <stdio.h>

/**
 * main - program that prints lowercase alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char rc;

	for (rc = 'z'; rc >= 'a'; rc--)
		putchar(rc);

	putchar('\n');

	return (0);
}
