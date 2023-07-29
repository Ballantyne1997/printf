#include "main.h"

/**
 * _printf -  Prints formatted data to stdout
 * @format: Format specifier
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			teamputchar(format[i]);
		}

		else if (format[i + 1] == 'c')
		{
			teamputchar(va_arg(args, int));
			i++;
		}

		else if (format[i + 1] == 's')
		{
			count = putss(va_arg(args, char *));
			i++;
			count += (count - 1);
		}

		else if (format[i + 1] == '%')
		{
			teamputchar('%');
		}

		count += 1;
	}
	va_end(args);
	return (count);
}
