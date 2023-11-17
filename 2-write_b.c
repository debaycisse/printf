#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void write_b(unsigned int num)
{
	long long int quotient;
	long long int remainder;
	long long int round;
	unsigned int num_cpy;
	long long int *num_array;
	long long int i;
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
	for (i = 0; i < round; i++)
	{
		num_array[round - 1] = num_cpy % 2;
		num_cpy /= 2;
	}
	j = 0;
	while (i > 0)
	{
		printf("%lli", num_array[j]);
		j++;
		i--;
	}
}

int main(void)
{
	write_b(10);
	printf("\n");
}
