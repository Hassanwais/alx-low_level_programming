#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - writing a program that prints all possible
* combinations of single-digit numbers
*
* Return: Always 0
*
*/
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);

		if (numbers <= 9)
		{
		putchar(',');
		putchar(' ');
		}
		numbers++;
	}
		putchar('\n');
		return (0);
}
