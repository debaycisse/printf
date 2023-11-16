#include <stddef.h>
#include "main.h"
#include <stdlib.h>

void write_int(int num)
{
	int num_len = 1;
	int i;
	int num_cpy = num;
	int *num_array;
	int num_len_cpy;

	while (num_cpy > 9)
	{
		num_cpy /= 10;
		num_len++;
	}
	num_array = malloc(num_len * sizeof(*num_array));
	num_len_cpy = num_len;
	if (num_array != NULL)
	{
		for (i = 0; i < num_len_cpy; i++)
		{
			if (num <= 9)
				num_array[0] = num;
			else
			{
				num_len--;
				num_array[num_len] = num % 10;
				num /= 10;
			}
		}
		for (i = 0; i < num_len_cpy; i++)
		{
			write_char(num_array[i] + '0');
		}
		free(num_array);
	}
}
