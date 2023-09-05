#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: 0 if successful, 1 for errors or incorrect arguments
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
