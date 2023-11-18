#include <unistd.h>
#include "main.h"

/**
 * write_p - writes percentage symbol
 * @ch: the percentage character to be written
 * Return: write's function return value
 */
int write_p(char ch, int *buffer_id)
{
	get_buffer('%', buffer_id);
	return (get_buffer(ch, buffer_id));
}
