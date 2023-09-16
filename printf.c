#include "main.h"

/**
 * _printf - a printf-like function for printing
 * @format: the text input
 * @...: the argument
 * Return: number of all printed characters
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(list, int));
				count++;

			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 's')
			{
				count += printString(va_arg(list, char *));
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
