#include <stdio.h>

/**
 * main - prints alphabet both in lower and uppercase
 * Return: always 0
 */
int main(void)
{
	char Az;

	for (Az = 'a'; Az <= 'z'; Az++)
		putchar(Az);

	for (Az = 'A'; Az <= 'Z'; Az++)
		putchar(Az);

	putchar('\n');

	return (0);
}

