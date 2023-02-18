#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i = 'a';

	while (i <=  'z')
	{
		if (i != 'e' || i != 'q')
			putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}

