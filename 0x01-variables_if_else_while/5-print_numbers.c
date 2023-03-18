#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int t;

	for (t = 0; t < 10; ++t)
	{
		printf("%d", t);
	}
	putchar('\n');
	return (0);
}
