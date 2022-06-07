#include "main.h"
/**
 * print_last_digit - entry point
 * @n: the int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
		return (n);
	}
	else
	{
		n = (-1 * (n % 10));
		return (n);
	}
}
