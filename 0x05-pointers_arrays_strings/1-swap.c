#include "main.h"

/**
 * swap_int - function that exchanges the variables' value using pointers.
 * @a: the first value to be changed.
 * @b: the second value to be changed.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
