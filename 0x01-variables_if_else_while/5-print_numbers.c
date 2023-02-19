#include <stdio.h>

/**
 * main - pragram that writes all digits of base 10 from 0
 * Return: always 0
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
		printf("%d", dig);

	printf("\n");

	return (0);
}
