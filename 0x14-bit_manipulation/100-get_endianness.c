/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	if ((1 | 1 << 1) == 2)
		return (0);
	else
		return (1);
}
