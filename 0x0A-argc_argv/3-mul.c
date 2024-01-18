#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv; array of strings, the command line arguments
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int result;
	int num_1;
	int num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	printf("%d\n", result = num_1 * num_2);
	return (0);
}
