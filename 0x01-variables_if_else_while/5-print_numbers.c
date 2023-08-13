#include <stdio.h>
/**
 * main - writing a program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 *
 */
int main (void)
{
	char base_ten = '0';
	while (base_ten <='9')
	{
		putchar (base_ten);
		base_ten ++;
	}
	putchar("\n");
	return (0);
}
