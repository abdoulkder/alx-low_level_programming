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
	int i;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
