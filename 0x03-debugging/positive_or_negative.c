#include "main.h"

#include <stdio.h>

/**
 * positive_or_negative - function that tests if i is positive or not
 *
 * @i: character to be tested
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
