/**
 * _isalpha - checks if alphabetic
 * Return: 0 or 1
 * @c: char to be checked
 */
int _isalpha(int c)
{
	if (
		('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9')
	)
	{
		return (1);
	}
	return (0);
}
