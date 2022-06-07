#include "main.h"
/**
 * _abs - entry point
 * @n: the int to print
 * Return: Always 0
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
