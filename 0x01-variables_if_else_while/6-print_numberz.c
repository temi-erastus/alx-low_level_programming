#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int numz;

	numz = 0;
	while (numz < 10)
	{
		putchar(numz);
		numz++;
	}
	putchar('\n');

	return (0);
}
