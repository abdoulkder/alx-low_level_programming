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
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is positive\n", i);
}
