#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * putsRecursion - prints a string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(&s[1]);
	}
	else
	{
		_putchar('\n');
	}
}

void putsRecursion(void)
{
	char s[] = "Puts with recursion";

	_puts_recursion(s);
}


