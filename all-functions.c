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

int printInt(int n)
{
	char buffer[10];
	int i, idx, digit, count = 0;

	if (n < 0)
	{
	    putchar('-');
	    n = -n;
	}
	else if (n == 0)
	{
	    putchar('0');
	}

	idx = 0;
	while (n > 0)
	{
	    digit = n % 10;
	    buffer[idx] = digit + '0';

	    idx++;
	    n /= 10;
	}

	for (i = idx - 1; i >= 0; i--)
	{
	    putchar(buffer[i]);
	    count++;
	}

	return count;
}
