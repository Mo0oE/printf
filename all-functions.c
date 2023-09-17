#include "main.h"

/**
 * printString - function to print strings
 * @str: the input string
 * Description: ...
 * Return: number of characters printed
 */

int printString(char *str)
{
	int i = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	return (i);
}

