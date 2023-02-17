#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 100 + 1;
	printf(" %d\n", n);
	if (n > 0)
	{
		printf("positive");
	} else if (n < 0)
	{
		printf("is negative");
	} else
	{
		printf("zero");
	}
	printf("\n");
	return (0);
}
