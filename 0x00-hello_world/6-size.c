#include<stdio.h>

/**
 * main - program starts
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
        printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
