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
	switch (ch)
	{
		case 'c':
			write_char(va_arg(v_parameters, int));
			(*count)++;
			break;
		case 's':
			write_string(va_arg(v_parameters, char *));
			(*count)++;
			break;
		case '%':
			write_p('%');
			(*count)++;
			break;
		case 'i':
		case 'd':
			write_int(va_arg(v_parameters, int));
			(*count)++;
			break;
		case 'b':
			write_b(va_arg(v_parameters, unsigned int));
			(*count)++;
			break;
		case 'u':
			write_u(va_arg(v_parameters, unsigned int));
			(*count)++;
			break;
		case 'o':
			write_o(va_arg(v_parameters, unsigned int));
			(*count)++;
			break;
		default:
			write_p('%');
			write_char(ch);
			(*count) += 2;
			break;
	}
}
