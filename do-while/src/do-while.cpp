//============================================================================
// Name        : do-while.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string fixed = "hello";

	string enter;
	do {
		cout << "Enter value" << endl;
		cin >> enter;
		if (enter != fixed) {
			cout << "Access denied" << endl;
		}
	} while (enter != fixed);

	cout << "Access available" << endl;

	return 0;
}
