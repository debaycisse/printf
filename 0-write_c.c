#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * write_char - prints character to the console or screen
 * @ch: the character to be printed
 * @count_name: the total number of processed characters
 * Return: the value of the @count
 */
int write_char(char ch, counter *count_name)
{
	write(1, &ch, 1);
	incr_count(count_name);
	return (count_name->count);
}
