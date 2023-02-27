#include "main.h"

/**
 * _puts - this function prints each character of the variable str
 * @str: variable which the characters must be printed
 * Return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
