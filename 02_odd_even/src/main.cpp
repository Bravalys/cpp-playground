#include <stdio.h>

#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}

int main(int argc, char *argv[])
{
	int number = -13;

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//		

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
	}
	
	// TODO(Gusti): i don't know why this doesn't work, but someone please FIX it.
	// --------------- start

	// Get the first argument
	std::string argumentAsString = argv[1];
	const char* argumentAsCharArray = argumentAsString.c_str();

	//number = argv[1]; // No
	//should use atoi?
	// or std::stoi?
	
	// Verify if the parameter is a number
	bool isParamNumber = true;
	if (argumentAsCharArray[0] == '-') {
		if(argumentAsString.length() == 1){     // Verify if the argument is only "-"
			isParamNumber = false;     
		}
		else {
			for (int i = 1; i < argumentAsString.length(); ++i) {
				if (isdigit(argumentAsString.at(i)) == 0) {       //Verify if the argument is a negative number
					isParamNumber = false;    
				}
			}
		}
	}
	else {
		for (int i = 0; i < argumentAsString.length(); ++i) {
			if (isdigit(argumentAsString.at(i)) == 0) {
				isParamNumber = false;						// Verify if the argument is not a number
			}
		}
	}
	// If the parameter is not a number print: "NAN" (Not a number) else print "ODD" or "EVEN"
	if (isParamNumber == false) {
		std::cout << "NAN" << std::endl;
	}
	else {
		number = std::stoi(argumentAsString);
		printOddOrEven(number);
	}
	
	// std::cout << argumentAsString << std::endl; // i think this should be removed
	

	// --------------- stop


	return 0;
}