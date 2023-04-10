#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Usage: just enter the program name");
	}
	printf("%s\n", argv[0]);
	return (0);
}
