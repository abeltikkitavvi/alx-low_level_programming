#include "main.h"

/**
 * *_strcpy - function that copies the strings
 * @dest: final location of string
 * @src: the string being copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int j;

	while (*src)
	{
		src++;
		count++;
	}

	for (j = 0; j < count; j++)
		src--;

	for (j = 0; j < count; j++)
	{
		dest[j] = *src;
		src++;
	}
	dest[j] = *src;

	return (dest);
}
