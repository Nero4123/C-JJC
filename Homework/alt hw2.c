#include <stdio.h>
#include <math.h>

int main (void) {
	
	//variables are declared
	int circumference; //user input establishes value
	double radius; //calculated value
	double area; //calculated value
	double pi = 3.14; //fixed value
		
	//initial print statement takes place followed by user input query
	printf("Enter a value for the circumference: ");
	scanf("%d", &circumference);
	
	//values are assigned to variables via arithmetic operations
    radius = circumference / (2*(pi));
	area = pi * pow(radius,2);
	
	//final results are printed to the console by referencing variables with assigned values after the calculations shown above
	printf("The radius of a wheel with circumference %d is %.2lf", circumference,  radius);
	printf("\nThe area of a wheel with circumference %d is %.2lf", circumference,  area);
	
	return(0);

}


