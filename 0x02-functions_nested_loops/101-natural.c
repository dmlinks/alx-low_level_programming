#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int sum;

	sum = 0;
	
	for (a = 0; a <= 1024; a++)
	{
		if ((a % 5) == 0 || (a % 3) == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);

	return (0);
}
