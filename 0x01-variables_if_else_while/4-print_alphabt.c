#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
			putchar (i);
	}
	return (0);
}

