#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to string.
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int num;

	num = 1;
	if (*s == 0)
	{
		return (0);
	}
	return (num + _strlen_recursion(s + 1));
}
