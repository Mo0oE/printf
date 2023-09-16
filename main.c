#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "Hello print!", c = 'M';

	_printf("%s\n", str);
	printf("%s\n", str);
	_printf("that's my: %c\n", c);
	printf("that's my: %c\n", c);
	_printf("dose this work %%?");
	printf("dose this work %%?");
	return (0);
}
