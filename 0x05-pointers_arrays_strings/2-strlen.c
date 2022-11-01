#include "main.h"

/**
 * _strlen - returns he length of a string
 *
 * @s: the dtring
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
