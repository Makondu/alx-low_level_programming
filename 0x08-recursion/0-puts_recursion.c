#include "main.h"

/**
 * _puts_recursion - prints a string
 */
void _puts_recursion(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

void putsRecursion(void)
{
	char s[] = "Puts with recursion";
	_puts_recursion(s);
}


