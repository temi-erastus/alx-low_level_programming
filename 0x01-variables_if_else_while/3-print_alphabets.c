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

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar(nwline);

	return (0);
}


