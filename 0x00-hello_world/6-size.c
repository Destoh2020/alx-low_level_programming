#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char acharacter;
	int binteger;
	long clong;
	long long dlonglong;
	float efloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(binteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(clong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(dlonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(efloat));
	return (0);
}
