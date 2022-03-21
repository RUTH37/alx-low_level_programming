#include "main.h"

/**
 * print_rev - function that prints  string in reverse.
 *
 * @s: print reverse string.
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
