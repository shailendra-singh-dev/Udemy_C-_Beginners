//============================================================================
// Name        : Encapsulation.cpp
// Author      : Shailendra
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
private:
	string getName() {
		return name;
	};
public:
	void showInfo() {
		cout << " Info:" + getName() << endl;
	};
};

int main() {
	Animal animal;
	animal.showInfo();

	return 0;
}
