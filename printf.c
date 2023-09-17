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
	char *str;
	va_list list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
                 return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == 'c')
				_putchar(va_arg(list, int)), count++;

			else if (*format == '%')
				_putchar('%'), count++;

			else if (*format == 's')
				str = va_arg(list, char *), count += printString(str);

			else
				_putchar(*format), count++;
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

