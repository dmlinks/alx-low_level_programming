#include "main.h"
#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument count
 * @argv: argument value, strings that comes after function name
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
