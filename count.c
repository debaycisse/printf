#include "main.h"

/**
 * create_count - creates an instance of counter
 * @num: the value from which to start counting
 * Return: the created instance
 */
counter create_count(int num)
{
	counter new_count;

	new_count.count = num;
	return (new_count);
}

/**
 * incr_count - increases the count
 * @name: the counter instance whose count member is to be increased
 */
void incr_count(counter *name)
{
	name->count++;
}

/**
 * get_count - obtains the value of the count
 * @name: the counter instance whose count member's value is obtained
 * Return: the value of the count
 */
int get_count(counter *name)
{
	return (name->count);
}
