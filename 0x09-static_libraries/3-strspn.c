#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				z++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (z);
		}
		s++;
	}
	return (z);
}
