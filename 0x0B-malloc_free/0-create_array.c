#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: memory to be allocated to array
 * @c: char to initialize array with
 * Return: NULL if it fail otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		arr[k] = c;
	}

	return (arr);
}
