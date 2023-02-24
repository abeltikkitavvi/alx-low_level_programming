#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the input character
 * Return: 1 if uppercase or 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
