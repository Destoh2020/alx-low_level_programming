#include "main.h"
/**
 * print_alphabet - functions that prints alphabet in lowercase
 *
 * Return: No return
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
