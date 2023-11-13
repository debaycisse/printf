#include <stddef.h>
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
	va_list all_data;
	char nw = '\n';
	func_t funcs[] = {
		{'c', write_char}
	};

	if (format == NULL)
		return (1);

	i = 0;
	va_start(all_data, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 1)
		{
			if (format[i] == funcs[i].format)
			{
				if (j == 0)
					funcs[i].f(va_arg(all_data, int));
				if (j == 1)
					funcs[i].f(va_arg(all_data, int));
			}
			j++;
		}
		i++;
	}
	write(1, &nw, sizeof(char));
	va_end(all_data);
}
