#include "main.h"

/**
 * print_rev - function that prints the reversed form of the character
 * @s: character that must be printed in the reversed form
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int j;

	while (*s != '\0')
	{
		longi++;
		s++;
	}	
	for (j = longi - 1; j >= 0; j--)
		_putchar(*(s + j));
	_putchar('\n');
}
