#include "main.h"

 /**
  * puts2 - function that prints the even number from an expression
  * @str:string from which even numbers must be retreived
  *
  * Return: always 0 
  */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			_putchar(i + '0');
	}
	_putchar('\n');
}
