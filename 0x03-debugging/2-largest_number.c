#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && (b > c || c > b) && a != 0)
    {
        largest = a;
    }
    else if (b > a && (a > c || c > a) && b != 0)
    {
        largest = b;
    }
    else if (c > a && (a > b || b > a) && c != 0)
    {
        largest = c;
    }

    return (largest);
}
