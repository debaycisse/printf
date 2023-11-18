#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * write_int - prints integer to the console
 * @num: the integer that is send to the standard output
 */
void write_int(int num, int *buffer_id)
{
	int num_len = 1;
	int i;
	int num_cpy = num;
	int *num_array;
	int num_len_cpy;

	if (num_cpy > 0)
		while (num_cpy > 9)
		{
			num_cpy /= 10;
			num_len++;
		}
	if (num_cpy < 0)
		while (num_cpy < -9)
		{
			num_cpy /= 10;
			num_len++;
		}
	num_cpy = num;
	num_array = malloc(num_len * sizeof(*num_array));
	num_len_cpy = num_len;
	if (num_array != NULL)
	{
		for (i = 0; i < num_len_cpy; i++)
		{
			if ((num_cpy <= 9) && (num > 0))
				num_array[0] = num_cpy;
			if ((num_cpy >= -9) && (num < 0))
				num_array[0] = num_cpy;
			else
			{
				num_len--;
				num_array[num_len] = num_cpy % 10;
				num_cpy /= 10;
			}
		}
		if (num > 0)
		{
			for (i = 0; i < num_len_cpy; i++)
			{
				write_char(num_array[i] + '0', buffer_id);
			}
		}
		if (num < 0)
		{
			write_char('-', buffer_id);
			for (i = 0; i < num_len_cpy; i++)
			{
				write_char((-(num_array[i])) + '0', buffer_id);
			}
		}
		free(num_array);
	}
}
