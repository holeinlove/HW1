#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("input a integer:");
	scanf_s("%d", &a);
	if (a % 2 == 1) //�P�_a/2���l��
	{
		printf("%d", a);
		printf(" is odd");
	}
	else
	{
		printf("%d", a);
		printf(" is even");
	}
}