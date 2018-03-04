//============================================================================
// Name        : Function.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout << "!!!Enter 1 for view!!!" << endl;
	cout << "!!!Enter 2 for search!!!" << endl;
	cout << "!!!Enter 3 for quit!!!" << endl;
}

int getInput() {
	cout << "!!!Enter selection!!!" << endl;
	int selection;
	cin >> selection;
	return selection;
}

void processSelection(int selection) {
	switch (selection) {
	case 1:
		cout << "!!!Viewing !!!" << endl;
		break;

	case 2:
		cout << "!!! Searching !!!" << endl;
		break;

	case 3:
		cout << "!!!Quitting !!!" << endl;
		break;

	default:
		cout << "!!!Invalid selection !!!" << endl;
		break;
	}
}

int main() {
	showMenu();
	int selection = getInput();
	processSelection(selection);
	return 0;
}
