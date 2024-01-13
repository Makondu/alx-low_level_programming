#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int parametre
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}

/**
 * square_root - helper function for recursion
 * @num: int parametre
 * @x: int parametre
 * Return: int
 */
int square_root(int num, int x)
{
	if ((x * x) > num)
	{
		return (-1);
	}
	else if ((x * x) == num)
	{
		return (x);
	}
	return (square_root(num, x + 1));
}
