#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b;

	a = 1;

	while (a <= 10)
	{
		b = 0;

		while (b <= 14)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
