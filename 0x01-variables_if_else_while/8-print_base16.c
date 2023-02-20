#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * Return: always 0
 */
int main(void)
{
	int dig;
	char az;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');
	for (az = 'a'; az <= 'f'; az++)
		putchar(az);

	putchar('\n');

	return (0);
}
