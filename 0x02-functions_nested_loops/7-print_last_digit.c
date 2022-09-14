#inclusde "main.h"
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
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (0);
}
