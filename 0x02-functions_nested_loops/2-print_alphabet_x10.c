#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
