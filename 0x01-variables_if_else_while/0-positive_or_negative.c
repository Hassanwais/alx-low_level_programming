#include <stdlib.h>
#include <time.h>
/**
 *main - random number store in variable is positive or negative when executed
 *
 *Return: Always (0)
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("#d is positive\n", n);		}
	else if (n==0)
	{
		printf("#d is zero\n", n);
	}
	else
	{
		printf("#d is negative\n"' n);
	}
	return (0);
}
