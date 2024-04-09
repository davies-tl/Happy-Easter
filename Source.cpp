/*
Programmer: Tyler Davies
Program Name: Happy Easter!
Date: 04/01/2024
Version: 8.0
Description: This program asks the user for a single digit integer between 0 and 9 inclusive.
	     It tests the input until it is valid, and prints out a message a number of times
	     based on the input received. It then uses the integer to display an image of an
	     Easter Bunny.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function declarations (prototypes)
int PromptUser();
int TestInput(bool, int);
void DisplayMessage(int);
void DisplayEasterBunny(int);
void PrintEars(int);
void PrintFace(int);
void ExitMessage();

//The main function calls the other functions to be used.
int main() {
	int numVal;
	bool testVal = false;
	
	numVal = PromptUser();
	numVal = TestInput(testVal, numVal);
	DisplayMessage(numVal);
	DisplayEasterBunny(numVal);
	ExitMessage();

	return 0;
}

//This function prompts the user for an integer.
int PromptUser() {
	int num;
	cout << "Enter a single digit integer between 0 and 9 inclusive.\nHit enter to see what happens!\n";
	cin >> num;
	return num;
}

//This function tests the user input.
int TestInput(bool test, int num) {
	while (test != true) {
		if (!cin) {
			cin.clear();	//Clears cin failure state.
			cout << "The item entered was not a single digit integer. Please try again.\n";
			cin.ignore(100, '\n');	//Ignores \n at the end of string.
			cin >> num;
		}
		else if (num < 0 || num > 9) {
			cout << "The item entered must be a single digit integer between 0 and 9 inclusive. Please try again.\n";
			cin.ignore(100, '\n');	//Ignores \n at the end of string.
			cin >> num;
		}
		else {
			test = true;
		}
	}
	return num;
}

//This funtion displays a message a number of times indicated by the user's input.
void DisplayMessage(int num) {
	cout << endl;
	for (int i = num; i > 0; --i) { 
		cout << "Happy Easter!\n";
	}
	cout << endl;
}

//This funtion displays an Easter Bunny using the user input.
void DisplayEasterBunny(int num) {
	PrintEars(num);
	PrintFace(num);	
}

//This funtion draws the bunny's ears.
void PrintEars(int draw) {
	cout << setw(6) << draw << setw(7) << draw << endl;
	cout << setw(5) << draw << draw << setw(7) << draw << draw << endl;
	cout << setw(4) << draw << draw << draw << setw(7) << draw << draw << draw << endl;
	cout << setw(3) << draw << draw << draw << draw << setw(7) << draw << draw << draw << draw << endl;
	cout << setw(3) << draw << draw << draw << draw << setw(7) << draw << draw << draw << draw << endl;
	cout << setw(4) << draw << draw << draw << setw(7) << draw << draw << draw << endl;
	cout << setw(5) << draw << draw << setw(7) << draw << draw << endl;
}

//This funtion draws the bunny's face.
void PrintFace(int draw) {
	cout << setw(7) << draw << draw << draw << draw << draw << draw << endl;
	cout << setw(5) << draw << draw << setw(7) << draw << draw << setw(5) << endl;
	cout << setw(4) << draw << draw << setw(2) << draw << draw << setw(3) << draw << draw << setw(2) << draw << draw << endl;
	cout << setw(3) << draw << draw << setw(3) << draw << draw << setw(3) << draw << draw << setw(3) << draw << draw << endl;
	cout << setw(3) << draw << draw << setw(3) << draw << draw << setw(3) << draw << draw << setw(3) << draw << draw << endl;
	cout << setw(3) << draw << draw << setw(11) << draw << draw << endl;
	cout << setw(4) << draw << draw << setw(3) << draw << draw << draw << draw << setw(3) << draw << draw << endl;
	cout << draw << draw << draw << draw << draw << draw << setw(3) << draw << draw << setw(3) << draw << draw << draw << draw << draw << draw << endl;
	cout << setw(3) << draw << setw(2) << draw << setw(2) << draw << draw << draw << draw << draw << draw << setw(2) << draw << setw(2) << draw << endl;
	cout << setw(2) << draw << setw(3) << draw << setw(9) << draw << setw(3) << draw << endl << endl;
}

//This function prompts the user for a character to end the program.
void ExitMessage() {
	cout << "Press enter to exit.\n";
	getchar();
}
