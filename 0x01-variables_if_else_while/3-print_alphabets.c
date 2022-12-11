#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower, upper, nwline;

	lower = 'a';
	upper = 'A';
	nwline = '\n';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar(nwline);

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	return (0);
}


