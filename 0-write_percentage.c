#include <unistd.h>

/**
 * write_p - writes percentage symbol
 * @ch: the percentage character to be written
 * Return: write's function return value
 */
int write_p(char ch)
{
	return (write(1, &ch, 1));
}
