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
	int count = 0;
	char nl = '\n';
	va_list v_parameters;
	const char *next_f;

	va_start(v_parameters, format);
	while (*format != '\0')
	{
		next_f = format + 1; 
		if ((*format == '%') && (*next_f == 'c') || (*next_f == 's'))
		{
			format++;
			switch (*format)
			{
				case 'c':
					write_char(va_arg(v_parameters, int));
					count++;
					break;
				case 's':
					write_string(va_arg(v_parameters, char *));
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			write_char(*format);
			count++;
		}
		format++;
	}
	va_end(v_parameters);
	_putchar('\n');
	return (count);
}
