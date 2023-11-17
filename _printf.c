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
	int count = 0;
	va_list v_parameters;
	const char *next_f;

	va_start(v_parameters, format);
	while (*format != '\0')
	{
		next_f = format + 1;
		if ((*format == '%') && ((*next_f == 'c') || (*next_f == 's') || \
			(*next_f == '%') || (*next_f == 'i') || (*next_f == 'd') || \
			(*next_f == 'b') || (*next_f == 'u')))
		{
			format += 2;
			percent_symbol(*(format - 1), &count, v_parameters);
		}
		if ((*format == '%') &&	((*next_f != 'c') || (*next_f != 's') || \
			(*next_f != '%') || (*next_f != 'i') || (*next_f != 'd') || \
			(*next_f != 'b') || (*next_f != 'u')))
		{
			format += 2;
			percent_symbol(*(format - 1), &count, v_parameters);
		}
		else if ((*format == '\\') && ((*next_f == 't') || (*next_f == 'n') || \
				(*next_f == '\\') || (*next_f == 'r') || (*next_f == 'v') || \
				(*next_f == 'f') || (*next_f == 'b') || (*next_f == 'a') || \
				(*next_f == '%')))
		{
			format += 2;
			backslash_symbol(*(format - 1), &count);
		}
		else if ((*format != '%') && (*format != '\\'))
		{
			write_char(*format);
			count++;
			format++;
		}
	}
	va_end(v_parameters);
	return (count);
}
