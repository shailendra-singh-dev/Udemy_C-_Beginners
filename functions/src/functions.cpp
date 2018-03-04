//============================================================================
// Name        : functions.cpp
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
	cout << "!!!Enter 2 for quit!!!" << endl;
}

void processSelection() {
	cout << "!!!Enter selection!!!" << endl;
	int selection;
	cin >> selection;
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
	processSelection();
	return 0;
}
