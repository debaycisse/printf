#include "main.h"
#include <unistd.h>

void write_char(char ch)
{
	write(1, &ch, sizeof(char));
}
