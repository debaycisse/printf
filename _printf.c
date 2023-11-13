#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 */
int _printf(const char *format, ...)
{
	int i;
	int j;
	va_list data;
	char nw = '\n';
	func_t funcs[] = 
	{
		{'c', write_char, char},
		{'%', write_char, char}
	}

	if (format == NULL)
		return (NULL);

	i = 0;
	va_start(data, format);
	while (strcmp(format[i], "\0") != 0)
	{
		j = 0;
		while (j < 2)
		{
			if (format[i] == funcs[i].format)
				funcs[i].f(va_arg(data, funcs[i].type));
			j++;
		}
		i++;
	}
	write(1, &nw, typeof(char));
	va_end(data);
}
