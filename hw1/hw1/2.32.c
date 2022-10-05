#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h, w, bmi;
	printf("Input weight (unit : kg)? ");
	scanf_s("%f", &w);
	printf("Input height (unit : meter)? ");
	scanf_s("%f", &h);
	bmi = w / (h * h);
	printf("BMI is %f, ", bmi);
	if (bmi < 18.5) printf("you are underwight (less than 18.5)\n");
	else if (18.5 <= bmi && bmi < 24) printf("you are normal (nice!)\n");
	else printf("you are overweight (more than 24)\n");
}