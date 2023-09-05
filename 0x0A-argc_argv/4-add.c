#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: 0 if successful, 1 if there are errors or no numbers are providedl
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
