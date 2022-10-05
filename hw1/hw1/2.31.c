#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("number  square  cube\n");
	int i;
	for (i = 0; i <= 10; i++) {
		printf("%d", i);
		printf("\t");
		printf("%d", i*i);
		printf("\t");
		printf("%d", i*i*i);
		printf("\n");
	}
}