/**
 * _strlen_recursion - returns the length of a string
 * Return: int : length of a string
 * @s: string to get its length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
