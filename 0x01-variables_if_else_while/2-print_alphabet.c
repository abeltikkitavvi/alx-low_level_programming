#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}

