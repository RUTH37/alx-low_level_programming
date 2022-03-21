#include "main.h"

/**
 * _rev - function that prints  string in reverse.
 *
 * @s: print rev string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int lenght;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}

	for (i = lenght -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
