#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -  a program that prints all possible
* different combinations of three digits
*
* Return: Always 0
*
*/
int main(void)
{
	int num1, num2, num3;

	num1 = '0';

	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			num3 = '0';
			while (num3 <= '9')
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '7')
					{
						putchar (',');
						putchar (' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar ('\n');
	return (0);
}
