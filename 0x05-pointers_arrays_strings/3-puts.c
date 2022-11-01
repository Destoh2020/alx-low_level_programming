#include "main.h"

/**
 * _puts - printsa character followed by a new line
 *
 * @str: the string
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}