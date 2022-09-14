#include "main.h"
/**
 * _isalpha - checks for alphabet characters
 *
 * @c: charcterto be checked
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
