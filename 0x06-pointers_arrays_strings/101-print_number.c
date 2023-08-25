#include "main.h"
#include <stdio.h>

/**
 * _putchar - Custom putchar function.
 * @c: Character to be printed.
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
