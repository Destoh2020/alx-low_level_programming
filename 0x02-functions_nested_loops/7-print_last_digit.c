#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: target number
 *
 * Return: Always 0(Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');
	return (0);
}
