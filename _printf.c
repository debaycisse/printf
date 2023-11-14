#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints data to the screen
 * @format: the data type flag
 *
 * Description: prints data to the standard output using its given format
 */
int _printf(const char *format, ...)
{
	char nl = '\n';
	va_list v_parameters;

	va_start(v_parameters, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*format)
			{
				case 'c':
					write_char(va_arg(v_parameters, int));
					break;
				case 's':
					write_string(va_arg(v_parameters, char *));
					break;
				default:
					break;
			}
		}
		write(1, &format, 1);
		format++;
	}
	va_end(v_parameters);
	write(1, &nl, 1);
}
