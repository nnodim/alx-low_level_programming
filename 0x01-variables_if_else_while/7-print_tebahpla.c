#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
