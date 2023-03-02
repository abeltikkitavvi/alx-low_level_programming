#include "main.h"

/**
 * *leet - function that encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int f, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; n[f] != '\0'; f++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[f] == s1[k])
			{
				n[f] = s2[k];
			}
		}
	}
	return (n);
}
