#include <stdio.h>			// Directives //


float kilometers_to_miles() {		// Function that prompts the user for a quantity in a given unit and returns the quantity in another unit //
	float output1;		// Declaring and initiating/defining variables for use in the rest of the function 
	char input_function1 = 'a';
	do {		// Do-while loop is used to keep asking the user which unit they want until they a valid input is given //
	printf("Please input the direction of the conversion, K for kilometers->miles and M for miles->kilometers: ");		// Prompt for unit of measurement //
	scanf("%s", &input_function1);
	} while (input_function1 != 'K' && input_function1 != 'M');
	if (input_function1 == 'K') {		// If statement that converts kilometers to miles //
		printf("Please input the number of kilometers: ");	// Prompt for quantity //
		scanf("%f", &output1);
		printf("%f", output1*0.621371);
	}
	else {
		printf("Please input the number of miles: ");		// Else statement converts miles to kilometers //
		scanf("%f", &output1);
		printf("%f", output1*1.60934);
	}
}

float litres_to_gallons() {	// Function that prompts the user for a quantity in a given unit and returns the quantity in another unit //
	float output2;		// Declaring and intializing variables that will be used in the rest of the function //
	char input_function2 = 'a';
	do {		// Do-while loop used to keep asking the user which unit they want until they give a valid input //
	printf("Please input the direction of the conversion, L for litres->gallons and G for gallons->litres: ");	// Prompt for unit of measurement //
	scanf("%s", &input_function2);
	} while (input_function2 != 'L' && input_function2 != 'G');
	if (input_function2 == 'L') {		// If statement converts litres to gallons //
		printf("Please input the number of litres: ");
		scanf("%f", &output2);
		printf("%f", output2*0.264172);
	}
	else {			// Else statement converts gallons to litres //
		printf("Please input the number of gallons: ");
		scanf("%f", &output2);
		printf("%f", output2*3.78541);
	}
}

float centimeters_to_inches() {		// Function that prompts the user for a quantity in a given unit and returns the quantity in another unit //
	float output3;		// Declaring and initializing variables that will be used in the rest of the function
	char input_function3 = 'a';
	do {		// Do-while loop used to keep asking user which unit they want until they give a valid input //
	printf("Please input the direction of the conversion, C for centimeters->inches and I for inches->centimeters: ");	// Prompt for unit of measurement //
	scanf("%s", &input_function3);
	} while (input_function3 != 'C' && input_function3 != 'I');
	if (input_function3 == 'C') {		// If statement coverts centimeters to inches //
		printf("Please input the number of centimeters: ");
		scanf("%f", &output3);
		printf("%f", output3*0.393701);
	}
	else {		// Else statement converts inches to centimeters //
		printf("Please input the number of inches: ");
		scanf("%f", &output3);
		printf("%f", output3*2.54);
	}
}

float celcius_to_farenheit() {		// Funtion that prompts the user for a quantity in a given unit and returns the quantity in another unit //
	float output4;		// Declaring and initializating variables that will be used in the function //
	char input_function4 = 'a';
	do {		// Do-while loop used to keep asking user which unit they want until they give a valid input //
	printf("Please input the direction of the conversion, C for celcius->farenheit and F for farenheit->celcius: ");	// Prompt for the unit of measurement //
	scanf("%s", &input_function4);
	} while (input_function4 != 'C' && input_function4 != 'F');
	if (input_function4 == 'C') {		// If statement converts celcius to farenheit //
		printf("Please input the temperature in celcius: ");	// Prompt for quantity //
		scanf("%f", &output4);
		printf("%f", output4*(9/5) + 32);
	}
	else {		// Else statement converts farenheit to celcius //	
		printf("Please input the temperature in farenheit: ");		// Prompt for quantity //
		scanf("%f", &output4);
		output4 = output4-32;
		output4 = output4*5;
		output4 = output4/9;
		printf("%f", output4);
	}
}

int main(void) {	// Main function that utilizes above funtions as well as first differentiating the type of conversion that wants to be performed so that it knows which function to use //
	char input1=0;		// Initializing of variable to be used in function //
	do {		// Do-while loop keeps asking user until valid input is given //
		printf("  ");
	do {
	printf("Please enter a number (1=km->mi,2=li->gal,3=cm->in,4=C->F,5=quit): ");	// Prompt to input number //
	scanf("%s", &input1);
	} while (input1 !='1' && input1!='2' && input1!='3' && input1!='4' && input1!='5');

	if (input1 == '1') {
		kilometers_to_miles();
	}
	else if (input1 == '2') {
		litres_to_gallons();
	}
	else if (input1 == '3') {
	       centimeters_to_inches();
	}
	else if (input1 == '4') {
		celcius_to_farenheit();
	}
	else if (input1 == '5') {
		return 0;	
	}
 	} while (input1 != '5');	
	return 0;	// Return to show that program executed correctly //
}	
