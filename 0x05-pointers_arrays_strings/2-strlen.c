#include "main.h"

/**
 * _strlen - calculate the length of string
 *
 * @s: pointer to string to calculate lenght
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
