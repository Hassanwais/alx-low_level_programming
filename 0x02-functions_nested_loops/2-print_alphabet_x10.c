#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *                                             * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int a;

		for (a = 0; a < 10; a++)
		{
			for (i = 'a'; i <= 'z'; i++)
			{
			putchar(i);
		}
		putchar('\n');
	}
}
