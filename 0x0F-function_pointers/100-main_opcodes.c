#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[i]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", ptr[i++]);
		printf("%hhx\n", ptr[i]);
	}

	return (0);
}
