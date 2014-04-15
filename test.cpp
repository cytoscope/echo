#include <stdio.h>

int main(int *argc, char **argv)
{
	int n = 0;

	while (*(argv + n) != NULL)
		printf("\n%s\n", *(argv + n++));

	return 0;
}
