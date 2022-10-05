#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("input a integer:");
	scanf_s("%d", &a);
	if (a % 2 == 1) //§PÂ_a/2ªº¾l¼Æ
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