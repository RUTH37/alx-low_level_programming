#include "main.h"

/**
 * _puts - prints string follwed by new line to stdout.
 *
 * @s: print a string.
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i =0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
