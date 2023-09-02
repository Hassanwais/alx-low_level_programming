#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if  parameter is a digit or character
 *
 * @c: parameter
 * Return: 1 if it is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
