#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - takes string asinput parameter
 *
 * @s: string to be taken
 *
 * Return: striing reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
