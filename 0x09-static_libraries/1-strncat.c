#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: copying to this value
 * @src: copying from these value
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int k;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[d] = src[k];
		d++;
		k++;
	}
	dest[d] = '\0';
	return (dest);
}
