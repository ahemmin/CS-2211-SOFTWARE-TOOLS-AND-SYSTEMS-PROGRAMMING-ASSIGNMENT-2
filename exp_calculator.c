
#include <stdio.h>		// Directives //
#include <stdlib.h>

float exponential_calculator(float base, int exponent) {	// Function calculates exponentials based upon the user defined base and exponent values //
	float answer, answer1;		// Variables declared //
	if (base == 0) {	// Exit condition //
		return 0;
	}
	if (exponent > 0 && (exponent % 2) == 0) {
		return (exponential_calculator(base, exponent/2)*exponential_calculator(base, exponent/2));
	}
	else if (exponent > 0 && (exponent % 2) == 1) {
		return (base*exponential_calculator(base, exponent/2)*exponential_calculator(base, exponent/2));
	}
	else if (exponent < 0 && (abs(exponent) % 2) == 0) {
		return 1/(exponential_calculator(base, abs(exponent)/2)*exponential_calculator(base, abs(exponent)/2));
	}
	else if (exponent < 0 && (abs(exponent) % 2) == 1) {
       		return 1 / (base*exponential_calculator(base, abs(exponent)/2)*exponential_calculator(base, abs(exponent)/2));
	}
	else {
		return 1;	// Cause where exponent is 0 //
	}
}

int main(void) {	// Main function that uses the above function in addition to prompting the user for base and exponents input //
	int exponent1;
	float base1;
	do {		// Do-while functions to keep sking user for input until valid input is given //
	printf("Please enter a base: ");
	scanf("%f", &base1);
	printf("Please enter an exponent: ");
	scanf("%d", &exponent1);
	if (base1 != 0) {
	printf(" ");
	printf("%f", exponential_calculator(base1,exponent1));
	printf(" ");
	}
	} while (base1 != 0);
		return 0;	// Tells you that the program as terminated correctly //
}
