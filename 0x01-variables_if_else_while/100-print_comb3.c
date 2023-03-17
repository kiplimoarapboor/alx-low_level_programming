#include <stdio.h>

/**
  * main - prints combinations of different numbers
  *
  * Return: 0 is success
  *
  */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (i != j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
				
			}

		}
	}
	putchar('\n');
}
