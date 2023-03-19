#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _rev;

	for (_rev = 'z'; _rev >= 'a'; _rev--)
	{
		putchar(_rev);
	}
	putchar('\n');
	return (0);
}
