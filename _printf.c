#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints data to the screen
 * @format: the data type flag
 *
 * Return: the number succesful operations
 */
int _printf(const char *format, ...)
{
	counter count = create_count(0);
	va_list v_parameters;

	va_start(v_parameters, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format += 2;
			percent_symbol(*(format - 1), &count, v_parameters);
		}
		if (*format == '\\')
		{
			format += 2;
			backslash_symbol(*(format - 1), &count);
		}
		if ((*format != '%') && (*format != '\\'))
		{
			write_char(*format, &count);
			format++;
		}
	}
	va_end(v_parameters);
	return (get_count(&count));
}
