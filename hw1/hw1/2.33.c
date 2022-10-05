#include <stdio.h>
#include <stdlib.h>

int main() {
	float km, cost, average, parking, tolls, total_cost;

	printf("Total km drive per day:");
	scanf_s("%f", &km);
	printf("Per liters of gasoline cost:");
	scanf_s("%f", &cost);
	printf("Average km per liters:");
	scanf_s("%f", &average);
	printf("Parking fees per day:");
	scanf_s("%f", &parking);
	printf("Tolls per day:");
	scanf_s("%f", &tolls);

	total_cost = (km / average) * cost + parking + tolls;
	printf("Total driving cost per day is: %.2f", total_cost);
}