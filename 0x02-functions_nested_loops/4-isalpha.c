/**
 * _isalpha - checks if alphabetic
 * Return: 0 or 1
 * @c: char to be checked
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('Z' <= c && c <= 'Z') || ('9' <= c && c <= '9'))
	{
		return (1);
	}
	return (0);
}
