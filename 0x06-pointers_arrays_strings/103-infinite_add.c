#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, a, b, sum;
	int carry = 0;
	int len1 = strlen(n1), len2 = strlen(n2);
	int maxlen = len1 > len2 ? len1 : len2;

	if (maxlen + 1 >= size_r)
	{
		return (0);
	}

	r[maxlen] = '\0';
	len1--;
	len2--;

	for (i = maxlen - 1; i >=0; i--)
	{
		a = len1 >= 0 ? n1[len1] - 48 : 0;
		b = len2 >= 0 ? n2[len2] - 48 : 0;
		sum = a + b + carry;

		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		r[i] = sum + '0';

		len1--;
		len2--;
	}

	if (carry)
	{
		if ((maxlen + 2 ) > size_r)
			return (0);
		r[i + 1] = carry + '0';
	}
	return (r);
}
