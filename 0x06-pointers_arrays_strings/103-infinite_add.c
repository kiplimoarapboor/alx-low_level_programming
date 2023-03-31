/**
 * infinite_add- adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r:  buffer for result
 * @size_r: buffer size
 *
 * Return: pointer to addition result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, len1, len2, smaller, sum;

	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	if (len2 > len1)
		smaller = len1;
	else
		smaller = len2 - 1;

	for (i = smaller; i >= 0; i--)
	{
		sum = (n1[i] + 48 ) + (n2[i] + 48);
		r[i] = ((sum % 10) + 48);
	}
}
