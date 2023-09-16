#include <unistd.h>
#include "main.h"

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
