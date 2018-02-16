#include "letterlist.h"
#include <iostream>

using namespace std;

void letterlist::printMessage(){
	letterlist *nodePtr = head;
	while (nodePtr) {
		cout << nodePtr->letter << ' '; // prints the linked list here.
		nodePtr = nodePtr->next; // moves to the next node.
	}
}

void letterlist::unravel(int num, char letter){
	letterlist *newNode = new letterlist;
	letterlist *nodePtr;
	letterlist *previousNode = nullptr;
	newNode->number = num;
	newNode->letter = letter;

	if (head == nullptr) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {
		nodePtr = head;
		previousNode = nullptr;
		while (nodePtr != nullptr && nodePtr->number < num) {
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (previousNode == nullptr) {
			head = newNode;
			newNode->next = nodePtr;
		}
		else {
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

letterlist::letterlist(){
	head = nullptr;
	letter = ' ';
	number = 0;
}


letterlist::~letterlist(){
	letterlist *nodePtr = head;
	letterlist *previousNode;

	while (nodePtr != nullptr) { // repeats until the end of the list.
		previousNode = nodePtr;
		nodePtr = nodePtr->next; // moves to the next node.
		delete previousNode; // deletes the node.
	}
	head = nullptr; // sets head to nullptr as is good practice.
}