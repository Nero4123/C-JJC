#include <stdio.h>
#include <math.h>

int main (void) {
	
	float circumference;
	double radius;
	double area;
	float pi = 3.14;
		
	
	printf("What is the wheel's circumference? ");
	scanf("%f", &circumference);
	

    radius = circumference / (2*(pi));
	area = (circumference * (radius * radius));
	
	printf("The radius is: %lf", radius);
	printf("\nThe area is: %lf",  area);
	
	return(0);


}


