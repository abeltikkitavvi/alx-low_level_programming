#include "main.h"

/**
 * helperfunction - returns 1 if prime number otherwise 0
 * @j: input number
 * @k: possible factor of number
 * Return: 1 if prime ,0 if not.
 */
int helperfunction(int j, int k)
{
	if (k < j)
	{
		if (j % k == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(j, k + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
