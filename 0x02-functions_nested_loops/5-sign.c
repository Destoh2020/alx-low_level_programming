#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be checked
 *
 * Return: 1 and print + if number is greater than zero
 *
 * 0 and print 0 if number is 0
 *
 * -1 and print - if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
