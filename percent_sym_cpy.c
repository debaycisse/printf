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
		{'c', write_char, NULL},
		{'S', NULL, write_S}
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
			(*all_func[i].f_non_prt)(va_arg(v_parameters, char *), count_name);
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
