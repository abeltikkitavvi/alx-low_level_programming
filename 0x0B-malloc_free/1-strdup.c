#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a
 * pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: pointer to duplicated string on success
 * NUL if failed
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, k;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < len; k++)
	{
		duplicate[k] = str[k];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
