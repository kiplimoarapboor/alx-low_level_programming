/**
 * rot13- performs rot encryption
 *
 * @s: string to be encryptes
 *
 * Return: pointer to encrypted string
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
			if (s[i] == alpha[j])
			{
				s[i] = dest[j];
				break;
			}
	}
	return (s);
}
