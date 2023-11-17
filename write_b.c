#include <stdlib.h>
#include "main.h"

/**
 * write_b - converts based 10 to binary
 * @num: the number to be converted
 */
void write_b(unsigned int num)
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
		num_cpy /= 2;
		round++;
	}
	num_array = malloc(round * sizeof(*num_array));
	num_cpy = num;
	i = 0;
	while (num_cpy > 0)
	{
		num_array[--round] = num_cpy % 2;
		num_cpy /= 2;
		i++;
	}
	j = 0;
	while (i > 0)
	{
		write_char((num_array[i]) + '0');
		j++;
		i--;
	}
	free(num_array);
}
