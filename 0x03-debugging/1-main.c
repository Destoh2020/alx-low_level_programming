#include <stdio.h>
/**
 * main - causes an infite loop
 * the function avoids while loop since it is commented 
 * and print the output
 *
 * @\\o/\n: what the loop prints after commenting the while loop
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

/**
 * while (i < 10)
 * {
 * putchar(i);
 * }
*/
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}