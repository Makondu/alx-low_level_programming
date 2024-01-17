#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: array of strings
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
