// Nicole Rodgers
// Canon Interview Code Sample

// One option for the code sample is for you to create a new function that takes 
// as input an ascii string containing an octal representation of an unsigned integer 
// and convert that string to an integer value.  Our favorite languages are C++, C and C#.  
// As an example the input string "012" would be converted to the integer value 10 (i.e. 0000 0000 0000 1010).  


#include <iostream>

using namespace std;


// Funtion to convert octal number to integer
int octalToInt(string octalNumber) {
	// Setting variables
	int decimal = 0, newOctal = 0, remainder, product = 1;

	// First we convert the string to an integer data type so we can do arithmatic
	for (int i = 0; i < octalNumber.length(); i++) {
		newOctal = newOctal * 10 + (octalNumber[i] - '0');
	}

	// Checking if user entered an ASCII octal number, otherwise throws exception
	if (newOctal < 0 or newOctal > 377) {
		throw "Not an ASCII octal number. Please try again.";
	}

	// Algorithm to convert an octal number to decimal
	while (newOctal != 0) {
		remainder = newOctal % 10;
		newOctal = newOctal / 10;
		decimal = decimal + (remainder * product);
		product *= 8;
	}

	return decimal;

}

// Main function
int main() {

	// TASK 1:
	// Take input as ascii string containing an octal representation of an unsigned integer

	// Create string to store octal number
	// Taking input as a string as per question
	string octalNumber;

	// Ask user for an octal number
	cout << "Enter an octal number: ";

	// Take in user response and store value
	cin >> octalNumber;
	// Tell user their input
	cout << "You entered: " << octalNumber << endl;


	// TASK 2:
	// Convert that string to an integer value

	// Create integer to store returned value of the function called
	int solution = octalToInt(octalNumber);
	// Tell user the solution
	cout << "The integer value is: " << solution;

	return 0;
}