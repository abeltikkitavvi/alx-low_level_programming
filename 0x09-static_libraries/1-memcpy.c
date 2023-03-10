#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: the memory where it is stored
 * @src: the memory from where it is copied
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int e = n;

	for (; d < e; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
