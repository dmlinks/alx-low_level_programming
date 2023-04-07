#include <stdio.h>

/**
 * main - prints all the argument recieved
 * @argc: arugment counter
 * @argv: argument values, argument that follows a function
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
