#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * percent_symbol - handles percentage sign character formatting
 * @ch: character to use for determining the character handling
 * @count_name: to store the number of processed characters
 * @v_parameters: variadic value list
 */
void percent_symbol(char ch, counter *count_name, va_list v_parameters)
{
	func_t all_func[] = {
		{'c', write_char, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
		{'s', NULL, write_string, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
		{'%', NULL, NULL, write_p, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
		{'d', NULL, NULL, NULL, write_int, NULL, NULL, NULL, NULL, NULL, NULL},
		{'i', NULL, NULL, NULL, write_int, NULL, NULL, NULL, NULL, NULL, NULL},
		{'b', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, write_b},
		{'u', NULL, NULL, NULL, NULL, NULL, NULL, write_u, NULL, NULL, NULL},
		{'o', NULL, NULL, NULL, NULL, NULL, write_o, NULL, NULL, NULL, NULL},
		{'x', NULL, NULL, NULL, NULL, NULL, NULL, NULL, write_x, NULL, NULL},
		{'X', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, write_X, NULL}
	};
	int function_size = sizeof(all_func) / sizeof(all_func[0]);
	int i;

	i = 0;
	while (i < function_size)
	{
		if (ch == all_func[i].format && i == 0)
		{
			(*all_func[i].f_char)(va_arg(v_parameters, int), count_name);
			break;
		}

		else if (ch == all_func[i].format && i == 1)
		{
			(*all_func[i].f_str)(va_arg(v_parameters, char *), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 2)
		{
			(*all_func[i].f_percentage)('%', count_name);
			break;
		}
		else if (ch == all_func[i].format && (i == 3 || i == 4))
		{
			(*all_func[i].f_int)(va_arg(v_parameters, int), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 5)
		{
			(*all_func[i].f_binary)(va_arg(v_parameters, unsigned int), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 6)
		{
			(*all_func[i].f_unsigned_int)(va_arg(v_parameters, unsigned int), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 7)
		{
			(*all_func[i].f_octa)(va_arg(v_parameters, unsigned int), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 8)
		{
			(*all_func[i].f_hex)(va_arg(v_parameters, unsigned int), count_name);
			break;
		}
		else if (ch == all_func[i].format && i == 9)
		{
			(*all_func[i].f_HEX)(va_arg(v_parameters, unsigned int), count_name);
			break;
		}
		else if ((i + 1) == function_size)
		{
			write_char('%', count_name);
			write_char(ch, count_name);
		}
		i++;
	}
}
