#include "main.h"

/**
 * helperfunction - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @k: possible square root of number
 * Return: the resulting square root
 */
int helperfunction(int n, int k)
{
	if ((k * k) > n)
	{
		return (-1);
	}
	else
	{
		if ((k * k) == n)
			return (k);
		else
			return (helperfunction(n, k + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural
 * square rootmof number
 * @n: input number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
