#include "main.h"
#include <stdlib.h>

/**
 * write_S - prints variadic strings and treats any non-printable characters
 * @str: the passed variadic string
 * @count_name: the total number of processed characters
 */
void write_S(char *str, counter *count_name)
{
	int *num_array;
	int round;

	while (*str != '\0')
	{
		int ascii = (int) *str;

		if ((ascii <= 32) || (ascii >= 127))
		{
			write_char('\\', count_name);
			write_char('x', count_name);
			round = 2;
			num_array = malloc(round * sizeof(*num_array));
			while (round > 0)
			{
				num_array[--round] = ascii % 16;
				ascii /= 16;
			}
			while (round < 2)
			{
				write_char(switch_num_capital(num_array[round]), count_name);
				round++;
			}
			free(num_array);
			if (*str == '\\')
				str += 2;
			else
				str++;
		}
		else
		{
			write_char(*str, count_name);
			str++;
		}
	}
}
