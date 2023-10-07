#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * Return: ptr to a newly allocated space in memory, which contains @s1,
 * followed by the first @n bytes of @s2, and null terminated || NULL (fail)
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concat from @s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0, s2_size = 0, total_size, i;
	char *result;

	/* get size of strings */
	while (s1[s1_size])
		s1_size++;
	while (s2[s2_size])
		s2_size++;
	if (n >= s2_size)
		n = s2_size;
	total_size = s1_size + n + 1; /* 1 is for the last \0 */
	result = (char *) malloc(total_size * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < s1_size; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[s1_size + i] = s2[i];
	result[total_size - 1] = '\0';
	return (result);
}
