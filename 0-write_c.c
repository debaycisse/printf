#include "main.h"
#include <unistd>

void write_char(char ch)
{
	write(1, &ch, sizeof(char));
}
