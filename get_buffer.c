#include <unistd.h>
#include "main.h"

/**
 * get_buffer - gets buffer and stores data in it
 * @data: data (character) to be stored
 * @buffer_id: the index of the buffer
 * Return: the number of data stored
 */
int get_buffer(char data, int *buffer_id)
{
	int size;
	int buffer[1024];

	size = sizeof(buffer) / sizeof(buffer[0]);
	if (*buffer_id == size)
	{
		return (write(1, buffer, 1024));
		*buffer_id = 0;
	}
	else
	{
		buffer[*buffer_id] = data;
		return (++(*buffer_id));
	}
}
