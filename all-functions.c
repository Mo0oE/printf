#include "main.h"

/**
 * printstring - function to print strings
 * @str: the input string
 * Description: ...
 * Return: number of characters printed
 */

int printstring(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}


/**
 * printint - the function to print decimal numbers
 * @n: the input to be printed
 * Return: number of printed numbers
*/

int printint(int n)
{
	unsigned int n1, i = 1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if ((n1 / 10) > 0)
	{
		i++;
		print_number(n1 / 10);
	}

	_putchar('0' + (n1 % 10));
	return (i);
}
