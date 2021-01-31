#include <stdio.h>
#include <math.h>

int main (void) {
	
	float circumference;
	float radius;
	float area;
	float pi = 3.14;
		
	
	printf("What is the wheel's circumference? ");
	scanf("%f", &circumference);
	

    radius = circumference / (2*(pi));
	area = pi * (radius * radius);
	
	printf("The radius is: %.2f", radius);
	printf("\nThe area is: %f",  area);
	
	return(0);


}


