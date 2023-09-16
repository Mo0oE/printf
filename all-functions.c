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
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	return (i);
}


/**
 * printInt - the function to print decimal numbers
 * @n: the input to be printed
 * Return: number of printed numbers
 */

int printint(int n)
{
	char buffer[10];
	int i, idx, digit, count = 0;

	if (n < 0)
	{
<<<<<<< HEAD
		putchar('-');
=======
		_putchar('-');
>>>>>>> f3b41d9da8c23c9fa7ba66177bebd9fb31983c45
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
<<<<<<< HEAD
		putchar(buffer[i]);
=======
		_putchar(buffer[i]);
>>>>>>> f3b41d9da8c23c9fa7ba66177bebd9fb31983c45
		count++;
	}

	return (count);
}
