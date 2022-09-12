#include <unistd.h>
/**
 * main - Entery point
 *
 * Return: Alway 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
