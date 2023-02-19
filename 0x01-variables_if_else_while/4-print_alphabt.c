#include <stdio.h>

/**
 * main - prints all alphabets in lowercase except q and e
 * Return: always 0
 */
int main(void)

{
	char ra;

	for (ra = 'a'; ra <= 'z'; ra++)
	{
		if (ra != 'e' && ra != 'q')

			putchar(ra);
	}

	putchar('\n');

	return (0);
}
