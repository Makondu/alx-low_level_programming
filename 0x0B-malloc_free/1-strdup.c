#include "main.h"
#include<stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocted space in memory
 * @str: string
 *
 * Return: Pointer to the array
 */
char *_strdup(char *str)
{
	char *duplicate_string;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	duplicate_string = malloc(sizeof(char) * (i + 1));
	if (duplicate_string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		duplicate_string[j] = str[j];
	}
	return (duplicate_string);
}
