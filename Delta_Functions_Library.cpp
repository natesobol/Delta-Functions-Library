// Programmer: Nate Sobol
// Last Modified: 9/12/16
// Title: Delta Functions
// Description: A compilation of useful functions for reference only

#include <iostream>
using namespace std;

// Validates if user entered number
double getNum() {
	double num;
	while (!(cin >> num)) {
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Please no letter: ";
	}
	cin.ignore(80, '\n');
	return num;
}

// Validates if user entered integer
int getInt() {
	double num = getNum();
	while (num != int(num)) {
		cout << num << " isn't a integer. Try Again: ";
		num = getNum();
	}
	return int(num);
}

// Validates if user entered a positive number
int getPosNum() {
	// Declaration
	int count = 0, i, num = 1;

	// Input
	for (i = 1; num > 0; i++) {
		cout << num << " isn't a positivive integer";
		num = getInt();
		count += num;
	}

	// Processing
	num = count / i;

	// Return
	return num;
}

// Validates if user entered within range
int getInRange(double startNum, double endNum) {
	// Input
	double num = getNum();

	// Validation
	while (num < startNum || num > endNum) {
		cout << "Number isn't in range. Try again: ";
		num = getNum();
	}

	// Return
	return num;
}

// Validates if user enters a traditional letter
char getLetter() {
	// Declaration
	char letter;

	// Input
	cin >> letter;     cin.ignore(80, '\n');

	// Validation
	while (letter < 'A' || letter > 'z' || letter < 'a' && letter > 'Z') {
		cout << letter << " isn't a letter. Try Again: ";
		cin >> letter;      cin.ignore(80, '\n');
	}

	// Return
	return letter;
}

// Validates if a number is prime
void getPrime() {
	// Declaration
	int num = getInt();
	bool isPrime;

	// Processing
	for (int i = 2; i <= num / 2; ++i)
	{
		if (num%i == 0)
		{
			isPrime = true;
		}
	}

	// Ouput
	if (isPrime = false)
		cout << num << " isn't";
	else
		cout << num << " is";
}

