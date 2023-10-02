
/**
* _isupper - checks if char is uppercase
* Return: 0 or 1
* @c: char to be checked
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
