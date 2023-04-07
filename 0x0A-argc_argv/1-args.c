#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argc: argument count
 * @argv: argument value, a string followed by the function
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
