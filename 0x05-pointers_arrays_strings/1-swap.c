#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first pointer
 * @b: 2nd pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
