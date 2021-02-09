#include <stdio.h>

int main(void){

	double wage;
	double gPay;
	double dues;
	double taxes;
	double fPay;
	int hours;
	char jType;

	printf("Is the employee a welder?");
	scanf("%c", &jType);
	
	printf("\nEnter hourly wage");
	scanf("%lf", &wage);
	
	printf("\nEnter number of hours");
	scanf("%d", &hours);


if(hours > 40 && jType == 'y' || 'Y') {
	   hours > 40 = hours * 2;
	}
	
	if(hours > 40 && jType == 'n' || 'N') {
	hours > 40  = hours * 1.5; }
	
	if(jType == 'y' || 'Y'){
	dues = (wage * 2.5) / 4; }
	else if (jType == 'n' || 'N' ){
	dues = 0;
}

	gPay = wage * hours;
	taxes = gPay * 0.3;
	fPay= gPay - taxes - dues;
	
	
	
	


	printf("\n\nGross pay $%.2lf", gPay);
	printf("\nTaxes/medical $%.2lf", taxes);
	if(jType == 'y' || 'Y'){ 
	printf("\nUnion dues $%.2lf", dues);
	}
	printf("\nPaycheck amount $%.2lf", fPay);

	return(0);
}
