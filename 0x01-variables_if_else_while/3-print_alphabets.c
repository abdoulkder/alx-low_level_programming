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

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar (i);
	putchar ('\n');
	return (0);
}

