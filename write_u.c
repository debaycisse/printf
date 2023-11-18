#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * write_u - handles u% format string
 * @num: number to handle
 */
void write_u(unsigned int num, counter *count_name)
{
	unsigned int *num_array;
	unsigned int num_cpy;
	long int num_cpy_int;
	unsigned int i;
	unsigned int round = 0;

	if (((int) num) < 0)
	{
		num_cpy = num;
		while (num_cpy > 0)
		{
			round++;
			num_cpy /= 10;
		}
		num_array = malloc(round * sizeof(*num_array));
		num_cpy = num;
		i = round;
		if (num_array != NULL)
		{
			while (num_cpy > 0)
			{
				num_array[--i] = num_cpy % 10;
				num_cpy /= 10;
			}
			i = 0;
			while (round > 0)
			{
				write_char((num_array[i]) + '0', count_name);
				i++;
				round--;
			}
			free(num_array);
		}
	}
	else
	{
		num_cpy_int = (long int) num;
		while (num_cpy_int > 0)
		{
			round++;
			num_cpy_int /= 10;
		}
		num_array = malloc(round * sizeof(*num_array));
		num_cpy_int = (long int) num;
		i = round;
		if (num_array != NULL)
		{
			while (num_cpy_int > 0)
			{
				num_array[--i] = num_cpy_int % 10;
				num_cpy_int /= 10;
			}
			i = 0;
			while (round > 0)
			{
				write_char((num_array[i]) + '0', count_name);
				i++;
				round--;
			}
			free(num_array);
		}
	}
}
