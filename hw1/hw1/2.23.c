#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, num3;
	int small, large;
	printf("input three integers:\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	small = num1;
	large = num2;
	if (num2 < small) //§PÂ_¦¡
	{
		small = num2;
	}
	if (num3 < small)
	{
		small = num3;
	}
	if (num1 > large)
	{
		large = num1;
	}
	if (num3 > large)
	{
		large = num3;
	}
	printf("largest:%d\n", large);
	printf("smallest:%d\n", small);
}