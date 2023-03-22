#include"main.h"

/**
* jack_bauer - prints every minute of the day
*
* Description: prints every minute of the day
*
* Return: void
*/
void jack_bauer(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x < 24; x++)
	{
		y = 0;

		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
