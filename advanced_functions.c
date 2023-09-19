#include "main.h"
#include <stdint.h>

/**
 * print_reverse - A Fucntion To Print A String In Reverse Order
 * @str: The String To Print
 *
 * Return: The Number of Characters of The String
*/

int print_reverse(char *str)
{
	int i, len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (len);
}

/**
 * rot13 - A Function To Encrypt A Char In ROT13 Cipher
 * @c: The Character To Encrypt
 *
 * Return: Encrypted Char
*/

char rot13(char c)
{
	char base;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
		return ((c - base + 13) % 26 + base);
	}

	return (c);
}

/**
 * printROT13 - A Function To Encrypt A String In ROT13 Cypher
 * @str: The String To Encrypt
 *
 * Return: The Number of Characters of The String
*/

int printROT13(char *str)
{
	int i, count = 0;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(rot13(str[i]));
		count++;
	}

	return (count);
}

/**
 * print_address - A Function To Print The Address of Pointer
 * @ptr: The Pointer to Prit Its Address
 *
 * Return: The Nubmer of Printed Bytes
*/

int print_address(void *ptr)
{
	char buffer[20];
	int i, j, idx, digit, count = 0;
	uintptr_t adrs = (uintptr_t)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;

	idx = 0;
	while (adrs > 0)
	{
		digit = adrs % 16;
		buffer[idx] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
		idx++;
		adrs /= 16;
	}

	if (idx < 8)
		for (j = 0; j < 8 - idx; j++)
			count++, _putchar('0');

	for (i = idx - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}
