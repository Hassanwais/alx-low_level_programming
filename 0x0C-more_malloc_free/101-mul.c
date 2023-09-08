#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_integer - Checks if a string is composed of digits.
 * @str: The input string to check.
 *
 * Return: 1 if the string is a positive integer, 0 otherwise.
 */
int is_positive_integer(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - Multiplies two positive integers.
 * @num1: The first positive integer.
 * @num2: The second positive integer.
 *
 * Return: The product of num1 and num2.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect arguments,
 * or 98 if arguments are not positive integers.
 */
int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;

	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
