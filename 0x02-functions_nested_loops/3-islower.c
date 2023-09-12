/**
 * _islower - checks if lowercase
 * Return: 0 or 1
 * @c: char to be checked
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	return (0);
}
