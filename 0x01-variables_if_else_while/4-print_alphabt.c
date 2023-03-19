#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	b = 'a';

	do {
		if (b != 'e' && b != 'q')
		{
			putchar(b);
			b++;
		}
		else
			b++;
	} while (b <= 'z');
	putchar('\n');
	return (0);
}
