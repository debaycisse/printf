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
	func_t all_func[] ={
		{'c', write_char, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
		{'s', NULL, write_string, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
		{'%', NULL, NULL, write_p, NULL, NULL, NULL, NULL, NULL, NULL}
	};
	int function_size = sizeof(all_func) / sizeof(all_func[0]);
	int i;

	i = 0;
	while(i < function_size)
	{
		if (ch == all_func[i].format && i == 0)
		{
			(*all_func[i].f_char)(va_arg(v_parameters, int), count);
			break;
		}

		if (ch == all_func[i].format && i == 1)
		{
			(*all_func[i].f_str)(va_arg(v_parameters, char *), count);
			break;
		}
		if (ch == all_func[i].format && i == 2)
		{
			(*all_func[i].f_percentage)('%', count);
			break;
		}
		i++;
	}
	va_end(v_parameters);
}
