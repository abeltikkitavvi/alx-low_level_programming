#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * Return: always 0
 */
int main(void)
{

	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (k % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (k % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", k);
		}
	}
	printf("\n");
	return (0);
}

