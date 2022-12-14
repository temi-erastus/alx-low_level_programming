#include <stdio.h>
#include "main.h"

int multiples3_5(int num);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int sum;
	int m;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		m = multiples3_5(i);
		sum = sum + m;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * multiples3_5 - returns multiple of 3&5
 * @num: number to be tested
 * Return: num
 */

int multiples3_5(int num)
{
	if ((num % 3 == 0) && (num % 5 == 0))
		return (num);
	else
		return (0);
}
