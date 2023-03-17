#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of the elements in the array
 * @size: size in bytes of the elements
 * Return: pointer to the allocated memory
 * otherwise if size or nmemb is 0 returns NULL
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);

	if (t == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
	{
		*((char *)(t) + k) = 0;
	}

	return (t);
}
