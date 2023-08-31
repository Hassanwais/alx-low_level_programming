#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_find_sqrt(n, 1, n));
}

/**
 * _find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 * natural square root.
 */

int _find_sqrt(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (start >= end)
		return (-1);

	if (mid * mid > n)
		return (_find_sqrt(n, start, mid - 1));
	else
		return (_find_sqrt(n, mid + 1, end));
}
