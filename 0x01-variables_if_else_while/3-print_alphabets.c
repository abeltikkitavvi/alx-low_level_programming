#include <stdio.h>

/**
 * main - prints alphabet both in lower and uppercase
 * Return: always 0
 */
int main(void)
{
	char A_z;

	for (A_z = 'a'; A_z <= 'z'; A_z++)
		putchar(A_z);

	for (A_z = 'A'; A_z <= 'z'; A_z++)
		putchar(A_z);

	putchar('\n');

	return (0);
}

