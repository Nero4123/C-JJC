#include <stdio.h>

			//1st Question:
//The program writes out a statement including the 
//conversion of Fahrenheit degrees to celsius degrees
// After this is done, some dashes appear and the command
//line says "Process exited after 3.107 seconds...etc.

			//2nd Question:

//After looking up the .exe and executing it through the
//command line, after the program is executed, the CMD
// simply leaves the file location(path) under the line where
// the conversion of the temperatures occured.
// In my case, it was: C:\Users\Arthu\Desktop>

			//3rd Question:

// With pause included at the bottom, the program
//waits for the user to press a key to continue in order
//to finish out the program execution and give 
//the amount of time it took to complete the process



//This program prompts the user for a temperature in 
//Fahrenheit and displays the result to the screen.


/* This program prompts the user for a temperature in 
Fahrenheit,converts the temperature to Celsius, 
and displays the result to the screen.*/

//main function required by all C programs

//Variable declarations
int main (void) {
	double tempInFahrenheit;
	double tempInCelsius;


//Displays a prompt so the user knows what to do

printf("Enter the temperature in Fahrenheit: ");

//Reads the number types by the user and saves it into
// the variable tempInFahrenheit

scanf("%lf", &tempInFahrenheit);

//Computes the temperature in Celsius

tempInCelsius = (tempInFahrenheit -  32) / 1.8;

//T(F) - 32 / 1.8

//Displays the temperature in Celsius

printf("%.2f F converts to %.2f degrees C", tempInFahrenheit, tempInCelsius);

// All C programs need this at the end of main

system("pause");

return(0);
}

