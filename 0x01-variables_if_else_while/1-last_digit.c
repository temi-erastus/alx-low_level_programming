#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdig;

	lastdig = n % 10;

	if (lastdig > 5)
		printf("Last digit of %d is %d andis greater than 5\n", n, lastdig);
	else if (lastdig == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lastdig < 6)
		printf("Last digit of %d is %d and is less than 6\n", n, lastdig);
	return (0);
}
