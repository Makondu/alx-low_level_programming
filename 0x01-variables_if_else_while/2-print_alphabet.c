#include<stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		putchar(bet);
	}
	putchar('\n');
	return (0);
}
