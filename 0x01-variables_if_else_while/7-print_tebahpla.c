#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - writing a program that prints the lowercase
* alphabet in reverse, followed by a new line.
*
* Return: Always 0
*
*/
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
