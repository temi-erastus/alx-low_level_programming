#include "main"
#include <stdio>

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		if (i == 98)
			_putchar('\n');
	}
	else
	{
		for (i = n, i > 98; i--)
		{
			_putchar('0' + i);
			_putchar(',');
			_putchar(' ');
		}
		if (i == 98)
			_putchar('\n');
	}
}

