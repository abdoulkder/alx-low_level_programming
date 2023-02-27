#include "main.h"

/**
 * _strlen - function that counts the total
 * number of characters of a word
 * @s: the word which the characters must be counted
 *
 * Return: the function returns the total character numbers of the variable
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

