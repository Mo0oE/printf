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

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

