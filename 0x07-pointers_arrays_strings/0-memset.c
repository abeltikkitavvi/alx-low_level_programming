#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: the starting address
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed arraybwith the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}

