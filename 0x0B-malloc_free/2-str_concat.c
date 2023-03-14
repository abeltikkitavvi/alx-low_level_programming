#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string to be concatenated
 * @s2: the other to be concatenated
 * Return: pointer to a newly allocated space in memory
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *sk;
	unsigned int len1, len2, i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	sk = malloc((sizeof(char) * size) + 1);
	if (sk == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		sk[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		sk[i] = s2[j];
		i++;
		j++;
	}
	return (sk);
}

