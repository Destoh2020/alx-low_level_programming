#include "main.h"

/**
 * _strcpy - copies string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: Copied string
 */

char *_strcpy(char *dest, char *src)
{
	inti = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
