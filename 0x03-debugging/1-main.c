#include <stdio.h>
/**
 * main - cause an infite loop
 *
 * @\\o/\n: what to be printed followed by a new line
 *
 * Return: Alway 0 (Success)
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
