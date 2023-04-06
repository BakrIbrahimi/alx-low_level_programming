#include "main.h"

/**
 * _sqrt_recursion_check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int _sqrt_recursion_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (_sqrt_recursion_check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_recursion_check(1, n));
}
