/**
 * switch_num_small - maps num to its ascii value
 * @num: the number to be converted
 * Return: ascii value of the passed value
*/

char switch_num_small(int num)
{
	switch (num)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return (num + '0');
		case 10:
			return ('a');
		case 11:
			return ('b');
		case 12:
			return ('c');
		case 13:
			return ('d');
		case 14:
			return ('e');
		case 15:
			return ('f');
		default:
			return ('0');
	}
}
