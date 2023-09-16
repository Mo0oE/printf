#include "main.h"

/**
 * _printf - a printf-like function for printing
 * @format: the text input
 * @...: the argument
 * Return: number of all printed characters
*/

int _printf(const char *format, ...)
{
	int count = 0, idx;
	va_list list;

	va_start(list, format);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			idx++;
			if (format[idx] == 'c')
			{
				_putchar(va_arg(list, int));
				count++;

			}
			else if (format[idx] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[idx] == 's')
			{
				count += printString(va_arg(list, char *));
			}
			else if (format[idx] == 'd' || format[idx == 'i'])
			{
				printInt(va_arg(list, int));
				count++;
			}
		}
		else
		{
			_putchar(format[idx]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
