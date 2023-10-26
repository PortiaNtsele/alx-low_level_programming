#include "main.h"

/**
 * _sqrt - Helper function to calculate the square root recursively
 * @n: Number to calculate the square root of
 * @i: Iterate number to check the square
 * Return: The natural square root, or -1 if not found
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;

if (sqrt > n)
return (-1);

if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate the natural square root
 * Return: The natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 1));
}

