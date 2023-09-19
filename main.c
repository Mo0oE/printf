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
	char *str = NULL, c = 'n';
	int count = 0;

	count = printf("==========================Test Task No. 0==========================\n");
	printf("%i\n", count);
	count = _printf("%s\n", str);
	printf("%i\n", count);
	count = _printf("%c\n", c);
	printf("%i\n", count);
	count = _printf("Let's print a simple sentence.\n");
	printf("%i\n", count);
	count = _printf("%s", "I am a string !\n");
	printf("%i\n", count);
	count = _printf("%c\n", 'S');
	printf("%i\n", count);
	count = _printf("%%\n");
	printf("%i\n", count);
	count = _printf("%%%%%%%%%%%c\n", c);
	printf("%i\n", count);

	count = _printf("==========================Test Task No. 1==========================\n");
	printf("%i\n", count);
	count = _printf("%d\n", 1024);
	printf("%i\n", count);
	count = _printf("%d\n", -1024);
	printf("%i\n", count);
	count = _printf("%d\n", INT_MAX);
	printf("%i\n", count);


	count = printf("==========================Test Task No. 0==========================\n");
	printf("%i\n", count);
	count = printf("%s\n", str);
	printf("%i\n", count);
	count = printf("%c\n", c);
	printf("%i\n", count);
	count = printf("Let's print a simple sentence.\n");
	printf("%i\n", count);
	count = printf("%s", "I am a string !\n");
	printf("%i\n", count);
	count = printf("%c\n", 'S');
	printf("%i\n", count);
	count = printf("%%%%%%%%%%%c\n", c);
	printf("%i\n", count);


	count = printf("==========================Test Task No. 1==========================\n");
	printf("%i\n", count);
	count = printf("%d\n", 1024);
	printf("%i\n", count);
	count = printf("%d\n", -1024);
	printf("%i\n", count);
	count = printf("%d\n", INT_MAX);
	printf("%i\n", count);



	return (0);
}

