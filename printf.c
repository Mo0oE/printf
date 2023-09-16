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
	va_list args;

	if (!format)

	{
		return (-1);
	}

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(args, int));
				count++;
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 's')
			{
				count += printstring(va_arg(args, char *));
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
