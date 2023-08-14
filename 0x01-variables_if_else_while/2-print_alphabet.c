#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - to print alphabets in lowercase
 *
 * Return: always 0
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar ('\n');
	return (0);
}
