#include"main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: n is an integer
*
* Description: prints the last digit of a number
*
* Return: an integer
*/
int print_last_digit(int n)
{
	int final = n % 10;

	if (n < 0)
	{
		final = final * -1;
	}
	_putchar(final + '0');
	return (final);
}
