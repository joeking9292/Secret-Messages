#pragma once
class letterlist
{
public:
	void printMessage();
	//Purpose: This function prints out the message that was encrypted in the file.
	//Input: There is no input for this function.
	//Output: The output is the hidden message in the file.
	void unravel(int num, char letter);
	//Purpose: This function takes the content from the file and sorts the contents
	// in the proper way to be able to tell what the hidden message is.
	//Input: The input of this function is the number and character from one line
	// of the file.
	//Output: there is no output for this function.
	letterlist(); // this is the constructor for the letterlist class
	~letterlist(); // this is the destructor for the letterlist class
private:
	char letter;
	int number;
	letterlist *next;
	letterlist *head;
};

