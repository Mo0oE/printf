#include "main.h"

/**
 * print_reverse - A Fucntion To Print A String In Reverse Order
 * @str: The String To Print
 *
 * Return: The Number of Characters of The String
*/

int print_reverse(char *str)
{
	int idx, count = 0;

	if (str)
	{
		for (idx = 0; *str; str++)
		{
			idx++;
			count++;
		}

		str--;
		for (; idx >= 0; idx--, str--)
		{
			_putchar(*str);
		}
	}

	return (count);
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
