#include "main.h"
#include <limits.h>

/**
 * printString - function to print strings
 * @str: the input string
 * Description: ...
 * Return: number of characters printed
 */

int printString(char *str)
{
	int i = 0;

	if (!str)
		return (_printf("(null)"));
	while (str[i] != '\0' && str)
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _putchar - the function to print characters
 * @str: the input of putchar
 * Return: On success 1 and On error -1
 *
 */


int _putchar(char str)
{
	return (write(1, &str, 1));
}



/**
 * print_binary - A Function To Print Number in Binary Form
 * @n: The Number To Print
 *
 * Return: The Number of Bytes Printed
 */

int print_binary(int n)
{
	int i, j, binary[8 * sizeof(int)];


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}

	return (i);
}

/**
 * print_number - function
 * @n: input
 * Description: aNOne
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if ((n1 / 10) != 0)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * number_nums - A function to count numbers in the integer
 * @n: The input number
 * Return: How many numbers in this integer
*/

int number_nums(int n)
{
	unsigned int i, count = 1;

	if (n < 0)
	{
		i = -n;
		count++;
	}
	else
		i = n;

	while (i > 10)
	{
		count++;
		i /= 10;
	}
	return (count);
}

