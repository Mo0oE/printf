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
	int count = 0;

	count = _printf("%s\n", str);
	printf("%s\n%i\n", str, count);
	count = _printf("that's my: %c\n", c);
	printf("that's my: %c\n%i\n", c, count);
	count = _printf("dose this work %%?\n");
	printf("dose this work %%?\n%i\n", count);
	return (0);
}
