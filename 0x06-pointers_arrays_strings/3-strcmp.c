/**
 * _strcmp- compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: (-15) (0) (15) if s1 is, respectively
 * less than, equal to, or more than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j > i)
		return (-15);
	else if (i == j)
		return (0);
	else if (i > j)
		return (15);

	return (1);
}
