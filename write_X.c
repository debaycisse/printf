
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * write_X - handles %X format string
 * @num: the number to be converted to base 8
 */
void write_X(unsigned int num, int *buffer_id)
{
	long int round;
	unsigned int num_cpy;
	long int *num_array;
	long int i;
	int j;

	round = 0;
	num_cpy = num;
	while (num_cpy > 0)
	{
		num_cpy /= 16;
		round++;
	}
	num_array = malloc(round * sizeof(*num_array));
	if (num_array != NULL)
	{
		num_cpy = num;
		i = 0;
		while (num_cpy > 0)
		{
			num_array[--round] = num_cpy % 16;
			num_cpy /= 16;
			i++;
		}
		j = 0;
		while (i > 0)
		{
			write_char(switch_num_capital(num_array[j]), buffer_id);
			j++;
			i--;
		}
		free(num_array);
	}
	else
		return;
}
