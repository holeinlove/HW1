#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num1, num2;
	printf("input two integers:");
	scanf_s("%d%d", &num1, &num2);
	if (num1 % num2 != 0)
	{
		printf("first is not a multiple of the second");
	}
	else
	{
		printf("first is a multiple of the second");
	}
}