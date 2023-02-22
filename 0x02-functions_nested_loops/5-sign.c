#include "main.h"

/**
 * print_sign - function that checks if n is lower than zero or not
 *
 * @n: parameter to be checked
 *
 * Return: 1 if it is greater than 0 and 0 if it is equal to 0
 * and -1 otherwise
 */
int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
