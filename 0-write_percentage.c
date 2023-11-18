#include <unistd.h>
#include "main.h"

/**
 * write_p - writes percentage symbol
 * @ch: the percentage character to be written
 * @count_name: the total number of character processed
 */
void write_p(char ch, counter *count_name)
{
	write_char(ch, count_name);
}
