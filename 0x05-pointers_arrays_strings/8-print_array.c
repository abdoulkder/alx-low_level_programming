#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints the array numbers
 * @a: the array which the values must be printed
 * @n:the total numbers of the array
 * Return: always 0
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	if (i == n - 1)
		printf("%d", a[n - 1]);
	printf("\n");
}
