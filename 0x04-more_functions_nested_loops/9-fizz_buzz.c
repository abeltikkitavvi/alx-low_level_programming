#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		printf(" ");
		if (k % 3 == 0)
			printf("Fizz");
		if (k % 5 == 0)
			printf("Buzz");
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz");
		if (k % 3 != 0 && k % 5 != 0)
			printf("%d", k);
	}
	printf("\n");
	return (0);
}
