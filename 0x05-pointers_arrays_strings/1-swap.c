#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: int to be swapped
 * @b: int to be swappd
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
