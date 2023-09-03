#include <stdio.h>
/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: the number of command line argument
 * @argv: an array of string containing the command line argument
 *
 * Return: Always 0 (successful)
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
