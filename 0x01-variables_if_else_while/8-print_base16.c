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

	for (i = 0; i <= 9; i++)
		putchar (i + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}

