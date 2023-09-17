#include "main.h"

/**
 * print_binary - A Function To Print Number in Binary Form
 * @n: The Number To Print
 *
 * Return: The Number of Bytes Printed
*/

int print_binary(int n)
{
	int i, j, binary[32];

	if (n == 0)
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
