#include "main.h"
/**
 * islowe - checks for lowercase characters
 *
 * Return: Alway 0
 */
int  _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
