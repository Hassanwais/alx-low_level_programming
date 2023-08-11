-#include <stdio.h>
/**
 * main - print alphabet in lower and uppercase
 *
 * Return: Always (0)
 *
 */
int main (void)
{
	char lower = 'a';
	char upper = 'A';
	while (lower <='z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'z')
	{
		puchar (upper);
		upper++;
	}
	putchar ("\n");
	return (0);
}
