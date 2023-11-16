#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * percent_symbol - handles percentage sign character formatting
 * @ch: character to use for determining the character handling
 * @count: to store the number of processed characters
 * @v_parameters: variadic value list
 */
void percent_symbol(char ch, int *count, va_list v_parameters)
{
	if (ch == 'c')
	{
		write_char(va_arg(v_parameters, int));
		(*count)++;
	}
	if (ch == 's')
	{
		write_string(va_arg(v_parameters, char *));
		(*count)++;
	}
	if (ch == '%')
	{
		write_p('%');
		(*count)++;
	}
	if ((ch == 'i') || (ch == 'd'))
	{
		write_int(va_arg(v_parameters, int));
		(*count)++;
	}
	else
	{
		putchar('%');
		putchar(ch);
		*count += 2;
	}
}
