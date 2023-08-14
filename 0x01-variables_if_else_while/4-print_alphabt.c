#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * Return: printing of alphabet with some excepion
 *
 * Return: Always 0
 *
 */
int main (void)
{
	char alphabet = 'a';
	while(alphabet <= 'z')
	{
		if(alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar ('\n');
	return (0);
}
