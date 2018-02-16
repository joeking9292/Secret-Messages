#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include "letterlist.h"

using namespace std;

letterlist a;

void readFile(string userFile);
//Purpose: This function reads the file given by the user and passes the
// contents of the file to be bulit in a linked list.
//input: The input is the file given by the user.
//output: There is no output for this function.

int main() {
	cout << "Welcome to the decoder!" << endl;
	bool play = true;
	while (play) {
		cout << "Please enter your file here: ";
		string userFile;
		cin >> userFile;// gets the user's file
		
		readFile(userFile); // function call for reading the file.
		cout << "Your message is:" << endl;
		a.printMessage();
		cout << endl << endl;
		cout << "would you like to enter another file? (y/n)?:";
		char userInput;
		cin >> userInput;

		if (userInput == 'n')
			play = false;
	}
	cout << "Goodbye!" << endl;
	return 0;
}

void readFile(string userFile) {
	ifstream messageFile;
	messageFile.open(userFile); //opening the file 

	if (messageFile.fail()) { //checking if the file opens
		cout << "File did not open or doesn't exist" << endl;
		return;
	}

	char letter;
	int number;
	//bool endOfFile = true;
	while (messageFile.get(letter) && messageFile >> number) {
		a.unravel(number, letter); //function call to build the linked list
		//if (messageFile.eof())
			//endOfFile = false;
	}

	messageFile.close(); //closes the file once done with it
}