/**
 * _atoi - convert a str to an int
 * @s: ..
 * Return: int
*/

int _atoi(char *s)
{
	unsssed int nnn = 0;
	int sss = 1;

	do {
		if (*s == '-')
		{
			sss *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			nnn = (nnn * 10) + (*s - '0');
		}
		else if (nnn > 0)
		{
			break;
		}
	} while (*s++);

	return (nnn * sss);
}
