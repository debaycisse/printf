/**
 * switch_num_capital - maps num to its ascii value
 * @num: the number to be converted
 * Return: ascii value of the passed value
*/

char switch_num_capital(int num)
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
			return ('A');
		case 11:
			return ('B');
		case 12:
			return ('C');
		case 13:
			return ('D');
		case 14:
			return ('E');
		case 15:
			return ('F');
		default:
			return ('0');
	}
}
