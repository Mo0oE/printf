#include "main.h"

/**
 * _printf - a printf-like function for printing
 * @format: the text input
 * @...: the argument
 * Return: number of all printed characters
*/

int _printf(const char *format, ...)
{
	char *str = format;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
			{
				_putchar(va_arg(args, int));
				count++;

			}
			else if (*str == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*str == 's')
			{
				count += printstring(va_arg(args, char *));
			}
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}
