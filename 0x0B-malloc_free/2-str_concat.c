#include "main.h"
#include<stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	char *_string;
	unsigned int i;
	unsigned int j;
	unsigned int l;
	unsigned int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	_string = malloc(sizeof(char) * (j + i + 1));
	if (_string == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < i; l++)
	{
		_string[l] = s1[l];
	}
	x = j;
	for (j = 0; j < x; l++, j++)
	{
		_string[l] = s2[j];
	}
	return (_string);
}
